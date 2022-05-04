# Random16
Library for fast generation of 16 bit random numbers
- Algorithm random 2053
- Getting 16-bit numbers
- Top and bottom limit
- Class: ability to create multiple generators

### Compatibility
Compatible with all Arduino platforms (using Arduino functions)

## Content
- [Install](#install)
- [Initialization](#init)
- [Usage](#usage)
- [Example](#example)
- [Versions](#versions)
- [Bugs and feedback](#feedback)

<a id="install"></a>
## Installation
- The library can be found by the name **Random16** and installed through the library manager in:
    - Arduino IDE
    - Arduino IDE v2
    - PlatformIO
- [Download Library](https://github.com/GyverLibs/Random16/archive/refs/heads/main.zip) .zip archive for manual installation:
    - Unzip and put in *C:\Program Files (x86)\Arduino\libraries* (Windows x64)
    - Unzip and put in *C:\Program Files\Arduino\libraries* (Windows x32)
    - Unpack and put in *Documents/Arduino/libraries/*
    - (Arduino IDE) automatic installation from .zip: *Sketch/Include library/Add .ZIP library…* and specify the downloaded archive
- Read more detailed instructions for installing libraries [here] (https://alexgyver.ru/arduino-first/#%D0%A3%D1%81%D1%82%D0%B0%D0%BD%D0%BE% D0%B2%D0%BA%D0%B0_%D0%B1%D0%B8%D0%B1%D0%BB%D0%B8%D0%BE%D1%82%D0%B5%D0%BA)

<a id="init"></a>
## Initialization
```cpp
Random16 rnd;
```

<a id="usage"></a>
## Usage
```cpp
void setSeed(uint16_tseed); // set seed
uint16_t get(); // get a random number
uint16_t get(uint16_t max); // get a random number, limit from above
uint16_t get(uint16_t min, uint16_t max); // get a random number, limit from below and above
```

<a id="example"></a>
## Example
```cpp
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
```

<a id="versions"></a>
## Versions
- v1.0

<a id="feedback"></a>
## Bugs and feedback
When you find bugs, create an **Issue**, or better, immediately write to the mail [alex@alexgyver.ru](mailto:alex@alexgyver.ru)
The library is open for revision and your **Pull Request**'s!