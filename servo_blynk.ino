#include <Servo.h>
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
Servo servo;
char auth[] = "iaqEf4XGrFswMR1C_vm2KzwotQu51pSL"; //enter your Blynk auth token
char ssid[] = "ZTE-Fjeg5C";//enter your wifi
char pass[] = "q2fe9rr5";//enter your wifi password

BLYNK_WRITE(V0){
  servo.write(param.asInt());
}
void setup()  {
  Serial.begin(9600);
  servo.attach(D1);
  Blynk.begin(auth,ssid,pass);
}
void loop() {
  Blynk.run();
}
