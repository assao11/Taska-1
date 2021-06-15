#include <Servo.h>
Servo servo1;
int potpin0 = A0;
int val0 = 0;
Servo servo2;
int potpin1 = A1;
int val1= 0;
Servo servo3;
int potpin2 = A2;
int val2= 0;
Servo servo4;
int potpin3 = A3;
int val3 =0;
Servo servo5;
int potpin4 = A4;
int val4= 0;
void setup() { 
servo1.attach(3);
servo2.attach(5);
servo3.attach(9);
servo4.attach(10);
servo5.attach(11);
  // put your setup code here, to run once:

}

void loop() {
val0 = analogRead(potpin0);
val0 = map(val0,0, 1023 , 0 , 180);
servo1.write(val0);
delay(10); 
val1 = analogRead(potpin1);
vall = map(val1,0, 1023 , 0 , 180);
servo2.write(val1);
delay(10);
val2 = analogRead(potpin2);
val2 = map(val2,0, 1023 , 0 , 180);
servo3.write(val2);
delay(10);
val3 = analogRead(potpin3);
val3 = map(val3,0, 1023 , 0 , 180);
servo4.write(val3);
delay(10);
val4 = analogRead(potpin4);
val4 = map(val4,0, 1023 , 0 , 180);
servo5.write(val4);
delay(10);  
  // put your main code here, to run repeatedly:

}
