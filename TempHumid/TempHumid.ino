#include <dht.h>
dht11 DHT;

#define DHT11_PIN 0

void setup() {
  Serial.begin(9600);
}

void loop()
{
  delay(1000);
  int chk = DHT.read(DHT11_PIN);
  if (chk == 0) {
    Serial.print("Temperature = ");
    Serial.println(DHT.temperature);
    Serial.print("Humidity = ");
    Serial.println(DHT.humidity);
    showTemp();
    showHumidity();
  }
  else if (chk == -1) {
    Serial.print("Checksum Error\n");
  }
  else if (chk == -2) {
    Serial.print("Timeout Error\n");
  }
  else {
    Serial.print("Undefined Error\n");
  }
  delay(2000);
}

bool digitInRange(int digit) {
  //if out of range
  if ((digit < 0) || (digit > 9)) {
    return false;
  }
  else {
    return true;
  }
}

void showDigit( int digit)
{
  boolean isBitSet;
  for (int segment = 1; segment < 8; segment++)
  {
    //Check which segments needed
  }
}

void showTemp(){
  
}

void showHumidity(){
  
}








