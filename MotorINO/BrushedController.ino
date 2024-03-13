#include <Servo.h>

#define SERVO_PIN 4 // ESP32 pin GPIO26 connected to servo motor

Servo servoMotor;

void setup() {
  servoMotor.attach(SERVO_PIN);  // attaches the servo on ESP32 pin
  pinMode(32, INPUT);
  Serial.begin(9600);
}

int pos=70;
int value=0;
void loop() {

  value = analogRead(32);
  pos = map(value,0,4095,0,180);
  servoMotor.write(pos);
  Serial.println(pos);
  delay(150);
}