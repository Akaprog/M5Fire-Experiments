/*M5 Fire fail demonstration by Mikhail Dronov

Somewhat optimized version

I didn't manage to fully isolate and minimize the code, but the following code
always fails when builded with Arduino 1.8.5 and PSRAM: "Enabled"

Uncommenting of commented line, or removing some lines makes device work again

Fail symptoms - sketch will not start, returns trash or H symbol via serial

*/
#include <M5Stack.h>
void setup(void) {
  Serial.begin(115200);
  Serial.println("Hello!"); //removing this line helps for current sketch but it is not necessary for reproducing issue
  M5.begin();
  M5.Lcd.fillScreen(WHITE); //removing this line helps for current sketch but it is not necessary for reproducing issue
}
void loop(void)
{
 Serial.println("!");
}
