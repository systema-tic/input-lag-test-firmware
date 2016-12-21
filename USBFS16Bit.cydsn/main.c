/* ========================================
 * Input Lag Test Firmware
 * #LogicalGaming systema
 *
 * Polling rate (Report rate) : 1000Hz
 * Datapath : 16bit
 * 
 * This firmware moves coursor left and right.
 *
 * ========================================
*/
#include <project.h>

#define MOUSE_ENDPOINT      (0x01u)
#define MOUSE_DATA_LEN      (0x05u)
#define STEP                (128)
#define RIGHT               (30)
#define LEFT                (-30)
#define X_L                 (1u)
#define X_H                 (2u)

/* Mouse packet array: button, X, Y */
uint8 mouseData[MOUSE_DATA_LEN] = {0u, 0u, 0u, 0u, 0u}; 
uint8 bSNstring[16]={0x0Eu, 0x03u, 'L', 0u, 'G', 0u, 'S', 0u, 'N', 0u, '0', 0u, '1', 0u};

int main()
{
    CyGlobalIntEnable; 
    LED_Write(1);
    int16 dx=0;
    int counter = 0;
    
    // Init USBFS
    USBFS_SerialNumString(&bSNstring[0u]);
    USBFS_Start(0u, USBFS_5V_OPERATION); 
    while(!USBFS_bGetConfiguration()); 
    USBFS_LoadInEP(MOUSE_ENDPOINT, mouseData, MOUSE_DATA_LEN);
    LED_Write(0);
    while(1)
    {
        /* At this loop, the cousor moves as following steps.
         * 1. 0-127ms      Move +30 per 1ms    LED ON
         * 2. 128-255ms    No motion           LED OFF
         * 3. 256-383ms    Move -30 per 1ms    LED ON
         * 4. 384-511ms    No motion           LED OFF
         * 5. Goto step 1.
        */
        for(counter = 0 ; counter < STEP * 4 ; counter ++){
            //Wait for ACK
            while(!USBFS_GetEPAckState(MOUSE_ENDPOINT));
            USBFS_LoadInEP(MOUSE_ENDPOINT, mouseData, MOUSE_DATA_LEN);
            
            if(counter < STEP)
            {
                LED_Write(1); //Turn ON LED
                dx=RIGHT; //Move +30(x-axis)
            }
            else if (counter < STEP * 2)
            {
                LED_Write(0); //Turn OFF LED
                dx=0; //No movement
            }
            else if (counter < STEP * 3)
            {
                LED_Write(1); //Turn ON LED
                dx=LEFT; //Move 30(x-axis)
            }
            else
            {
                LED_Write(0); //Turn OFF LED
                dx=0; //No movement
            }
            //Write dx data
            mouseData[X_L] = (uint8)dx;
            mouseData[X_H] = dx >> 8;
            CyDelay(1);
        }
    }
    return 0;
}

/* [] END OF FILE */
