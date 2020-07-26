s#include <ESP8266Wifi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

#define BLYNK_PRINT serial

Servo servo;
char auth[]="auth token";
char ssid[]= "@wifi.id";
char pswd[]="password";

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pswd);
  servo.attach(16);
}

void loop(){
  Blynk.run();
}
BLYNK_WRITE(V1) {
  servo.write(paran.asInt());

 }
