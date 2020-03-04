/*
 * Project: Using OneButton library
 * Description: Introduct Students to OneButton Library using a button and the serial monitor
 * Author: Marlene Trujillo
 * Date: 03-03-20
 */

#include "OneButton.h"

// Setup OneButton on pin 23
OneButton button1(23, false);
// Create variables buttonState and flash*/
int buttonState = LOW;
int flash = LOW;
int ledPinB = 5;
int ledDelay = 500;

void setup() {

 Serial.begin(9600);
 while (!Serial);
// Link oneButton library to functions click1, doubleclick1, longPressStart1
//link button 1 functions.*/
button1.attachClick(click1);
button1.attachDoubleClick(doubleclick1);
button1.attachLongPressStart(longPressStart1);
button1.attachLongPressStop(longPressStop1);
digitalWrite (ledPinB, LOW);

  
} //click1;


// This function will be called when the button1 was pressed 2 times in a short timeframe.*/
void doubleclick1() {
Serial.println("Button 1 doubleclick.");
flash = !flash;
Serial.print("flash = ");
Serial.println(flash);
} // doubleclick1


// This function will be called once, when the button1 is pressed for a long time.*/
void longPressStart1() {
   Serial.println("Button 1 longPress start");
} // print longPressStart1


//This function will be called often, while button1 is pressed for a long time.*/
void longPress1(){
   Serial.println("Button 1 longPress...");
}//longPress1*/


//This function will be called once, when the button1 is released after being pressed for a long time.*/
void longPressStop1(){
  Serial.println("Button 1 longPress stop");

}//longPressStop1
