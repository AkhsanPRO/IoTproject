s#include <ESP8266Wifi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

#define BLYNK_PRINT serial

Servo servo;
char auth[]="ei82Cc_uxf_eawNxEqRnhl-FDvNgZWOw";
char ssid[]= "Irwana Nainggolan";
char pswd[]="mamaalmira";

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
