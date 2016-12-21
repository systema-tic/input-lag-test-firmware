# input-lag-test-firmware
Input lag testing firmware for PC games
#About
This firmware is input-lag measurement software for PC games.
It looks like a normal USB mouse from the PC, and moves the pointer to the left and right automatically.At this time, the LED turns on when the pointer is moving, and turns off the LED when it is not moving.
By observing the time at which the movement is drew on the display from the timing when the LED glows up, it is possible to measure the processing time (input-lag) from USB device to display.
# 概要
FPSなどのゲームの入力遅延を測定するためのファームウェアです．
PCからは普通のUSBマウスのように見え，自動でポインタを左右に動かします．
この時，ポインタを動かしている時はLEDがONになり，動いていない時はLEDがOFFになるような動作をします．
LEDが光りだしたタイミングから，ディスプレイに動きが反映される時間を観測することで，USBデバイス→ディスプレイまでにかかった処理時間(入力遅延)を測ることができます．
