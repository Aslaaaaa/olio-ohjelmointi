#include "car.h"


Car::Car(string b, string m, int y)
{
    brand=b;
    model=m;
    yearModel=y;
}

void Car::printData() const
{
    cout<<"Brand = "<<brand<<", Model = "<<model<<", Year = "<<yearModel<<endl;
}
