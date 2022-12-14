/** myBlink.cpp
*    Simple On-board LED flashing program - written by Derek Molloy
*                                           editted by Joshua Ryan
*    simple OOP  struture for the Exploring BeagleBone book
*
*    This program uses all four LEDS and can be executed in three ways:
*         myBlink on
*         myBlink off
*         myBlink flash  (flash at time delay intervals)
*         myBlink status (get the trigger status)
*         myBlink blink #of_blinks
*
* Written by Derek Molloy for the book "Exploring BeagleBone: Tools and 
* Techniques for Building with Embedded Linux" by John Wiley & Sons, 2014
* ISBN 9781118935125. Please see the file README.md in the repository root 
* directory for copyright and GNU GPLv3 license information.            */

#include"derek_LED.h"

int main(int argc, char* argv[]){
   if(argc!=4){
      cout << "Usage is myBlink <command led_number number_of_blinks>>" << endl;
      cout << "   command is one of: on, off, flash, blink #, or status" << endl;
      cout << " e.g. myBlink blink 5" << endl;
      return -1;
   }
   string cmd(argv[1]);
   int ledNum = stoi(argv[2]);
   int numBlinks = stoi(argv[3]);
   string flashRate(argv[3]);
   cout << "Starting the myBlink program" << endl;
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };

   if(cmd=="on")leds[ledNum].turnOn();
   else if(cmd=="off")leds[ledNum].turnOff();
   else if(cmd=="flash")leds[ledNum].flash(flashRate); //default is "50"
   else if(cmd=="blink")leds[ledNum].blink(numBlinks);
   else if(cmd=="status")leds[ledNum].outputState();
   else{ cout << "Invalid command!" << endl; }
   cout << "Finished the myBlink program" << endl;
   return 0;
}
