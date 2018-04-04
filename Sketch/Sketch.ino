  

#include <Joystick.h>
 
#define rul A0
 
#define swit 4
 
#define per1 5
#define per2 6
#define per3 7
#define per4 8
#define per5 9
#define per6 10
#define down 11
#define neit 12
 
#define ruch 3
 
#define gaz A1
#define tor A2
#define scep A3
 
int rulX;
int gazY;
int torY;
 
void setup() {
  Joystick.begin();
  pinMode(swit, INPUT_PULLUP);
  pinMode(ruch, INPUT_PULLUP);
}
 
void loop() {
  rulX = analogRead(rul);
  rulX = map(rulX, 0, 1023, -127, 128); //руль
  Joystick.setXAxis(rulX);
 
  if (analogRead(gaz) > analogRead(tor)) {
    gazY = analogRead(gaz);
    gazY = map(gazY, 0, 1023, 0, 127);
    Joystick.setYAxis(gazY);
  } else {
    torY = analogRead(tor);
    torY = map(torY, 0, 1023, 0, -127);
    Joystick.setYAxis(torY);
  }
 
 if (digitalRead(swit) == 1) { 
  if (analogRead(scep) > 10) { //1 - 6 передача
    if(digitalRead(per1) == 1) {
      Joystick.pressButton(1);
    } else {
      Joystick.releaseButton(1);
    }
    
    if(digitalRead(per2) == 1) {
      Joystick.pressButton(2);
    } else {
      Joystick.releaseButton(2);
    }
    
    if(digitalRead(per3) == 1) {
      Joystick.pressButton(3);
    } else {
      Joystick.releaseButton(3);
    }
    
    if(digitalRead(per4) == 1) {
      Joystick.pressButton(4);
    } else {
      Joystick.releaseButton(4);
    }
    
    if(digitalRead(per5) == 1) {
      Joystick.pressButton(5);
    } else {
      Joystick.releaseButton(5);
    }
    
    if(digitalRead(per6) == 1) {
      Joystick.pressButton(6);
    } else {
      Joystick.releaseButton(6);
    }
    
    if(digitalRead(down) == 1) {
      Joystick.pressButton(13);
    } else {
    Joystick.releaseButton(13);
    }
    
    if(digitalRead(neit) == 1) {
      Joystick.pressButton(15);
   } else {
    Joystick.releaseButton(15);;
   }
  }    
  } else { // 7 - 12 передач
   if (analogRead(scep) > 10) {
    if(digitalRead(per1) == 1) {
      Joystick.pressButton(7);
    } else {
      Joystick.releaseButton(7);
    }
    
    if(digitalRead(per2) == 1) {
      Joystick.pressButton(8);
    } else {
      Joystick.releaseButton(8);
    }
    
    if(digitalRead(per3) == 1) {
      Joystick.pressButton(9);
    } else {
      Joystick.releaseButton(9);
    }
    
    if(digitalRead(per4) == 1) {
      Joystick.pressButton(10);
    } else {
      Joystick.releaseButton(10);
    }
    
    if(digitalRead(per5) == 1) {
      Joystick.pressButton(11);
    } else {
      Joystick.releaseButton(11);
    }
    
    if(digitalRead(per6) == 1) {
      Joystick.pressButton(12);
    } else {
      Joystick.releaseButton(12);
    }
    
    if(digitalRead(down) == 1) {
      Joystick.pressButton(13);
    } else {
    Joystick.releaseButton(13);
    }
    
    if(digitalRead(neit) == 1) {
      Joystick.pressButton(15);
   } else {
    Joystick.releaseButton(15);;
   }
   
  }
   if(digitalRead(ruch) == 0){
    Joystick.pressButton(16);
   } else {
    Joystick.releaseButton(16);
   }
 }
}
