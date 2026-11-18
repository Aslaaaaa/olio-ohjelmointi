#include <iostream>
#include "coffeemaker.h"


using namespace std;

void erotus(){
    cout<<endl;
    cout<<"********************"<<endl;
    cout<<endl;
}

int main()
{
    CoffeeMaker objAutomaatti1(20, 10);
    objAutomaatti1.showStatus();
    objAutomaatti1.showMade();
    //objAutomaatti1.makeCoffee(); ei onnistunut, koska ei ole tarvikkeita
    //eikä automaatti ole ON tilassa

    erotus();

    //lisätään vettä
    objAutomaatti1.lisaaVetta(8);
    //lisätään papuja
    objAutomaatti1.lisaaPapuja(8);
    //asetetaan tilaan ON
    objAutomaatti1.start();
    //valmistetaan kahviannos
    objAutomaatti1.makeCoffee();

    //tarkistetaan tila ja tehdyt annokset
    objAutomaatti1.showStatus();
    objAutomaatti1.showMade();

    erotus();

    //valmistetaan 2. annosta ja tarkistetaan tila
    //objAutomaatti1.stop();
    objAutomaatti1.makeCoffee();
    objAutomaatti1.makeCoffee();

    objAutomaatti1.showStatus();
    objAutomaatti1.showMade();

    return 0;
}
