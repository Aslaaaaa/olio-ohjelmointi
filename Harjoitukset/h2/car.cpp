#include "car.h"

Car::Car() {}

void Car::printData()
{
    cout<<"Merkki = "<<brand<<", "<<"Malli = "<<model<<" ja "<<"vuosimalli = "<<yearModel<<endl;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
