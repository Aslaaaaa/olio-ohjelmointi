#ifndef COFFEEMAKER_H
#define COFFEEMAKER_H
#include <iostream>

using namespace std;

class CoffeeMaker
{
private:
    float v_tilavuus;
    float v_maara;
    float papu_kapasiteetti;
    float papu_maara;
    bool tila;
public:
    CoffeeMaker();
    void start();
    void stop();
    void lisaaVetta(float vm);
    void lisaaPapuja(float pa);
};

#endif // COFFEEMAKER_H
