#include <Servo.h>
int incomingByte = 0;
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();
                if (incomingByte == 97) {
                  pos = pos + 4;
                }
                if (incomingByte == 122) {
                  pos = pos - 4;
                }
                pos = constrain(pos, 0, 180);
                myservo.write(pos);
                
}
}
