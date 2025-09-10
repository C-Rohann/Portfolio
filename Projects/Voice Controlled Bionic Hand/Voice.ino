#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

int servoPin1 = 9;
int servoPin2 = 10;
int servoPin3 = 11;

void setup() {
  // Attach servos
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);

  // All start at 0°
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);

  delay(3000);  // wait 3 seconds

  // All move to 180° at the same time
  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
}

void loop() {
  // nothing here (one-time action)
}

