/*
    Библиотека для быстрой генерации 16 бит случайных чисел
    Документация: 
    GitHub: https://github.com/GyverLibs/Random16
    Возможности:
    - Алгоритм random 2053
    - Получение 16-бит чисел
    - Ограничение сверху и снизу
    - Класс: возможность создать несколько генераторов
    
    AlexGyver, alex@alexgyver.ru
    https://alexgyver.ru/
    MIT License

    Версии:
    v1.0 - релиз
*/

#ifndef Random16_h
#define Random16_h
#include <Arduino.h>

class Random16 {
public:
    // установить сид
    void setSeed(uint16_t seed) {
        _seed = seed;
    }
    
    // получить случайное число
    uint16_t get() {
        _seed = (_seed * 2053ul) + 13849;
        return _seed;
    }
    
    // получить случайное число, ограничить сверху
    uint16_t get(uint16_t max) {
        return ((uint32_t)max * get()) >> 16;
    }
    
    // получить случайное число, ограничить снизу и сверху
    uint16_t get(uint16_t min, uint16_t max) {
        return (get(max - min) + min);
    }
private:
    uint16_t _seed;
};

#endif
