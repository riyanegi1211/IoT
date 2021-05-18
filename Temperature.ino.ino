#include<DHT.h>
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>

#define BLYNK_PRINT Serial

char auth[]="fuDfHOI1F6HzRfDi5fOm_zUK2q3lRC37";
char ssid[]= "RISHI";
char pass[]="9427504947";

#define dht_dpin 0
#define DHTTYPE DHT11
DHT dht(dht_dpin,DHTTYPE);

  void setup(){
  dht.begin();
  Serial.begin(115200);
  Blynk.begin(auth,ssid,pass);
  Serial.println("Temperature and Humidity\n");
  delay(2000);
    }
 
    void loop(){
    Blynk.run();
    float temp=dht.readTemperature();
    float humidity=dht.readHumidity();
    Serial.print("Current Temperature");
    Serial.print(temp);
    Serial.print("C ");
    Serial.print("Current Humidity");
    Serial.print(humidity);
    Serial.println("% ");

    Blynk.virtualWrite(V1,temp);
    Blynk.virtualWrite(V2,humidity);
    delay(2000);
     }


     


   
