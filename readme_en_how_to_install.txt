This firmware is input-lag measurement software for PC games.

It looks like a normal USB mouse from the PC, and moves the pointer to the left and right automatically.At this time, the LED turns on when the pointer is moving, and turns off the LED when it is not moving.
By observing the time at which the movement is drew on the display from the timing when the LED glows up, it is possible to measure the processing time (input-lag) from USB device to display. Since the input lag is about several ms to several tens ms, it can be measured by counting the number of frames using a high-speed camera that can shoot at a frame rate of about 1000 fps. I am using Nikon 1 V1 (1200 fps), but I think that it can be measured if other models can high fps shoot.

For details, please see the article below.(Sorry this article is written in Japanese.)
Http://logical-gaming.blogspot.jp/2014/10/blog-post.html

----Required Environment----
# Microcomputer board
CY8CKIT-059 PSoC 5LP Prototyping Kit.

* For other PSoC 5LP boards, it should work if you set the target device and pin assign according to board configuration (unverified).

# MicroUSB cable
In this firmware, since the USB function of this microcomputer is used, MicroUSB cable is necessary.

# Firmware programmer
PSoC Creator builds and writes the firmware.
PSoC Creator can be obtained for free, but user registration is required.
I have confirmed the validation with PSoC Creator 3.3 CP 3 (3.3.0.9604).

----How To Install The Firmware----
1. Connect CY8CKIT-059 to the USB (Please plug the gold 4 wire on the board into the USB port).
2. When connecting for the first time, wait until the driver is installed.
3. Launch PSoC Creator.
4. Press "File> Open> Projects / Workspace".
5. Open /USBFS16Bit.cydsn/USBFS16Bit.cyprj.
6. Press Ctrl + F5 to build and flash (it will take a few minutes to build).
7. When build and flash is completed, remove CY8CKIT-059 from the USB.
8. Connect the MicroUSB cable to the connector on the opposite side of the board and connect the cable to the USB port.

If the mouse driver is installed, and the LED blinks and the pointer moves to the left or right, the firmware is operating normally.
If it is blinking but the pointer does not move, disconnect the MicroUSB cable. And reboot the PC.
