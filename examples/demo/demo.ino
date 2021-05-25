#include <Random16.h>
Random16 rnd;

void setup() {
  Serial.begin(9600);
  rnd.setSeed(12345);
  for (int i = 0; i < 100; i++) {
    Serial.println(rnd.get(100, 800));
  }
}

void loop() {
}
