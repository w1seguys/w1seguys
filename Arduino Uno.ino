#include <Servo.h>
#define servoPin11 11
#define servoPin12 12

uint32_t timer1, timer2;
bool servo11, servo12;
Servo myservo1;
Servo myservo2;
int water;

void setup() {
  pinMode(servoPin11, OUTPUT);
  pinMode(servoPin12, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  myservo1.attach(11);
  myservo2.attach(12);
}

void loop() {
  water = analogRead(A0);
  Serial.println(water);
  delay(1);
  if (water > 500) {
    digitalWrite(2, HIGH);
  }
  if (millis() - timer1 >= 500) {

    myservo1.write(130);
    delay(2000);
    myservo1.write(40);
    timer1 = millis();
  }

  if (millis() - timer2 >= 500) {

    myservo2.write(130);
    delay(2000);
    myservo2.write(20);
    timer2 = millis();
  }
}
