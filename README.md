# M5Fire-Experiments


Some sketches an ideas on M5Fire applications

**1. M5Fire_PCRAM_fail demonstration.**

  While porting older ESP32 project to M5Fire I discovered strange device failure which I somewhat tried to isolate
  
**2. M5Fire_PCRAM_fail2 demonstration.**

  Simplified version with same issue
  
**3. M5Fire_clicker demonstration.**

  Simplest way of demonstrating unexpected sounds from M5Stack Fire during analogRead
  
  Sometimes same issue is reproducable using Serial.print and Serial.println.
  
  Initing device via M5.begin() reduces sound volume a bit but not eliminates it. (Connecting more external devices to 5V line also reduces sound)
