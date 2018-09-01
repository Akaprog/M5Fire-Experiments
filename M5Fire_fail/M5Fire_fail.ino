/*M5 Fire fail demonstration by Mikhail Dronov

I didn't manage to fully isolate and minimize the code, but the following code
always fails when builded with Arduino 1.8.5 and PSRAM: "Enabled"

Uncommenting of commented line, or removing some lines makes device work again

Fail symptoms - sketch will not start, returns trash or H symbol via serial

*/
#include <M5Stack.h>
#define BATpin 35 //pin number doesn't matters
void setup(void) {
  Serial.begin(115200);
  Serial.println("Hello!"); //removing this line helps for current sketch but it is not necessary for reproducing issue
  pinMode(BATpin, INPUT);
  M5.begin();
  M5.Lcd.fillScreen(WHITE); //removing this line helps for current sketch but it is not necessary for reproducing issue
}
void loop(void)
{
 Serial.println((String)analogRead(BATpin)+"   "+(String)M5.isChargeFull());
 delay (1000);
 //M5.Lcd.println("!"); //uncommenting this line helps
}
