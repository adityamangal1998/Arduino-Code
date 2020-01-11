


#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

// Set these to run example.
#define FIREBASE_HOST "node-4f80b.firebaseio.com"
#define FIREBASE_AUTH "Am7q13MQ96Zzas0YiMFJ5XOvr0DSAQkSduNXfMVi"
#define WIFI_SSID "mangal"
#define WIFI_PASSWORD "aditya1234"

void setup() {
  Serial.begin(115200);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

int n = 0;

void loop() {
 
  
  
  Firebase.setString("message", "hello world");
  
  
  delay(1000);
  Firebase.setString("message1", "hello323");
  delay(1000);
  Firebase.setString("message2", "world2323");
}
