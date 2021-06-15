#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int i = 0;

void setup() {
  servo1.attach(3);
servo2.attach(5);
servo3.attach(9);
servo4.attach(10);
servo5.attach(11);
  // put your setup code here, to run once:
}

void loop() { for (i =0; i < 180; i++) {
  servo1.write(i);
servo2.write(i);
servo3.write(i);
servo4.write(i); 
servo5.write(i);
delay(10); }

for (i=90; i > 0 ;i--) {
  servo1.write(i);
servo2.write(i);
servo3.write(i);
servo4.write(i); 
servo5.write(i);
delay(10); }
  // put your main code here, to run repeatedly:

}