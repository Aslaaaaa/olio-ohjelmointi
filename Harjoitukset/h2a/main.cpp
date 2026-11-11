#include "car.h"
#include "rectangle.h"

#include <iostream>

using namespace std;

int main()
{

    Car objCar1;
    objCar1.setBrand("Toyota");
    objCar1.setModel("Avensis");
    objCar1.setYearModel(2003);
    objCar1.printData();

    Rectangle* objRectangle1 = new Rectangle;
    objRectangle1->setHeight(5.5);
    objRectangle1->setWidth(3.5);

    cout<<"Leveys = " << objRectangle1->getArea() << endl;
    cout<<"Korkeus = " << objRectangle1->getCircum() << endl;

    return 0;
}
