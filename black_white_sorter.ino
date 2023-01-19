#include <servo.pio.h>

#include <Servo.h>

Servo pushservo; 

void setup() {
  Serial.begin(115200);
  Serial.println("Waiting for BOOTSEL");
  while (!BOOTSEL) {

  }
  Serial.println("Black White LOL");
  Serial.println("Coded by Yanavut Rojanapron");
  Serial.println("Itsuki No.1");

  pinMode(0, INPUT);
  pinMode(2, OUTPUT);
  digitalWrite(2, true);

  pushservo.attach(1);
  pushservo.write(90);
}

void loop() {
  bool sensor = digitalRead(0);
  if (sensor) {
    Serial.println("Black");
    pushservo.write(180);
  } else {
    Serial.println("White");
    pushservo.write(0);
  }
  delay(250);
}

// void loop1() {
//   int pos;

//   // for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
//   //   // in steps of 1 degree
//   //   pushservo.write(pos);              // tell servo to go to position in variable 'pos'
//   //   delay(15);                       // waits 15ms for the servo to reach the position
//   // }
//   // for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
//   //   pushservo.write(pos);              // tell servo to go to position in variable 'pos'
//   //   delay(15);                       // waits 15ms for the servo to reach the position
//   // }

//   // pushservo.write(1);
//   // delay(1000);
//   // pushservo.write(180);
//   // delay(1000);
// }

