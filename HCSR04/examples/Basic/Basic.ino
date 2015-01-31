#include <HCSR04.h>

HCSR04 dist(A2, A0); // Trigger, Echo

void setup() {
  Serial.begin(57600);
  dist.begin();
 }

void loop()
{
  Serial.print(dist.readCm());
  Serial.print("cm");
  Serial.println();
  delay(100);
}



