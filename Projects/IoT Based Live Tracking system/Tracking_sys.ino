#include <SoftwareSerial.h>  // Use ESP8266-compatible SoftwareSerial
#include <ESP8266WiFi.h>
#include <TinyGPS++.h>

TinyGPSPlus gps;
SoftwareSerial SerialGPS(2, 3);  // RX, TX (ESP8266-compatible SoftwareSerial)
const char* ssid = "Rohan";
const char* password = "11111111";

float Latitude, Longitude;
int year, month, date, hour, minute, second;
String DateString, TimeString, LatitudeString, LongitudeString;

WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  SerialGPS.begin(9600);
  
  Serial.println("\nConnecting to WiFi...");
  
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println("\nWiFi Connected!");
  Serial.println("IP Address: " + WiFi.localIP().toString());

  server.begin();
}

void loop() {
  while (SerialGPS.available() > 0) {
    if (gps.encode(SerialGPS.read())) {
      if (gps.location.isValid()) {
        Latitude = gps.location.lat();
        Longitude = gps.location.lng();
        LatitudeString = String(Latitude, 6);
        LongitudeString = String(Longitude, 6);
      }

      if (gps.date.isValid()) {
        DateString = "";
        date = gps.date.day();
        month = gps.date.month();
        year = gps.date.year();
        
        DateString += (date < 10 ? "0" : "") + String(date) + " / ";
        DateString += (month < 10 ? "0" : "") + String(month) + " / ";
        DateString += String(year);
      }

      if (gps.time.isValid()) {
        TimeString = "";
        hour = gps.time.hour() + 5;  // Adjust UTC
        minute = gps.time.minute();
        second = gps.time.second();
        
        TimeString += (hour < 10 ? "0" : "") + String(hour) + " : ";
        TimeString += (minute < 10 ? "0" : "") + String(minute) + " : ";
        TimeString += (second < 10 ? "0" : "") + String(second);
      }
    }
  }

  WiFiClient client = server.available();
  if (!client) {
    return;
  }

  // HTML Response
  String htmlResponse = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";
  htmlResponse += "<!DOCTYPE html><html><head><title>GPS Data</title></head><body>";
  htmlResponse += "<h1>GPS Data</h1>";
  htmlResponse += "<p><b>Latitude:</b> " + LatitudeString + "</p>";
  htmlResponse += "<p><b>Longitude:</b> " + LongitudeString + "</p>";
  htmlResponse += "<p><b>Date:</b> " + DateString + "</p>";
  htmlResponse += "<p><b>Time:</b> " + TimeString + "</p>";
  htmlResponse += "</body></html>";

  client.print(htmlResponse);
  delay(100);
}
