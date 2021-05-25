![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)
![author](https://img.shields.io/badge/author-AlexGyver-informational.svg)
# Random16
Библиотека для быстрой генерации 16 бит случайных чисел
- Алгоритм random 2053
- Получение 16-бит чисел
- Ограничение сверху и снизу
- Класс: возможность создать несколько генераторов

### Совместимость
Совместима со всеми Arduino платформами (используются Arduino-функции)

## Содержание
- [Установка](#install)
- [Инициализация](#init)
- [Использование](#usage)
- [Пример](#example)
- [Версии](#versions)
- [Баги и обратная связь](#feedback)

<a id="install"></a>
## Установка
- Библиотеку можно найти по названию **Random16** и установить через менеджер библиотек в:
    - Arduino IDE
    - Arduino IDE v2
    - PlatformIO
- [Скачать библиотеку](https://github.com/GyverLibs/Random16/archive/refs/heads/main.zip) .zip архивом для ручной установки:
    - Распаковать и положить в *C:\Program Files (x86)\Arduino\libraries* (Windows x64)
    - Распаковать и положить в *C:\Program Files\Arduino\libraries* (Windows x32)
    - Распаковать и положить в *Документы/Arduino/libraries/*
    - (Arduino IDE) автоматическая установка из .zip: *Скетч/Подключить библиотеку/Добавить .ZIP библиотеку…* и указать скачанный архив
- Читай более подробную инструкцию по установке библиотек [здесь](https://alexgyver.ru/arduino-first/#%D0%A3%D1%81%D1%82%D0%B0%D0%BD%D0%BE%D0%B2%D0%BA%D0%B0_%D0%B1%D0%B8%D0%B1%D0%BB%D0%B8%D0%BE%D1%82%D0%B5%D0%BA)

<a id="init"></a>
## Инициализация
```cpp
Random16 rnd;
```

<a id="usage"></a>
## Использование
```cpp
void setSeed(uint16_t seed);                // установить сид
uint16_t get();                             // получить случайное число
uint16_t get(uint16_t max);                 // получить случайное число, ограничить сверху
uint16_t get(uint16_t min, uint16_t max);   // получить случайное число, ограничить снизу и сверху
```

<a id="example"></a>
## Пример
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
## Версии
- v1.0

<a id="feedback"></a>
## Баги и обратная связь
При нахождении багов создавайте **Issue**, а лучше сразу пишите на почту [alex@alexgyver.ru](mailto:alex@alexgyver.ru)  
Библиотека открыта для доработки и ваших **Pull Request**'ов!