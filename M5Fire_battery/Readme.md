#M5Fire_battery

**Requires soldering** **Could damage your device**

As with older TTGO-TS devices, when knowing exact battery level is necessary it is usable to make some solder mod:
for M5Stack Fire - to battery shield, you would need to solder resistors (50K Ohm as a minimum, I prefer 1M Ohm).
This step is necessary to divide battery voltage in half for not to overcome safe input level for ADC in any circumstances.

First resistor - between battery minus and selected battery pin (for me it's PIN 35). *Though it's possible to atach between ground and PIN35 I do prefer this way for some added safety.
Second resistor - between battery pin and selected battery pin.

Now you can always detect battery levels!

*BATmax and BATmin levels for indication are advised to be selected based on your device.*

