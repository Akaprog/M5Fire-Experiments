#include <M5Stack.h>
/*
Requires soldering, see Readme.md

not optimized - for demo simplicity
*/

//BATTERY SETUP
#define BATpin 35
#define BATmax 3.7
#define BATmin 3.0
float ADC_divider = 2;

float getBatLevel()
{
  delay(100); //is necessry to get correct readings
  return ADC_divider * (float)(analogRead(BATpin)) / 1024.0; // LiPo battery voltage in volts
}

int getBatPercent()
{
  return (int)(100*(getBatLevel() - BATmin) / (BATmax - BATmin) -1 ); //-1 to not get 101-102% due to input noises
}

void setup(void) {
  Serial.begin(115200);
  Serial.println("Hello!");
  pinMode(BATpin, INPUT);
  M5.begin();
  M5.Lcd.fillScreen(BLACK);
}

long i=0;

void loop(void)
{
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setCursor(0, 0, 7);
  i++;
  bool a=M5.isChargeFull();
  Serial.print(getBatLevel());
  Serial.print("   ");
  Serial.print(getBatPercent());
  Serial.print("   ");

  M5.Lcd.println((String)i+"   "+(String)getBatLevel());
  delay(500); //needed to mitigate M5Fire-fail
  M5.Lcd.println((String)getBatPercent()+"   "+(String)M5.isChargeFull()); //Never full while runnig
  if (M5.isChargeFull())
  {
    Serial.println("Full!");
  }
  else
  {
    Serial.println("Not full :(");
  }
  delay (1000);
}
