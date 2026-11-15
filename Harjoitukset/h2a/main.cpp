#include "car.h"
#include "rectangle.h"
#include "student.h"
#include<memory>


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

    unique_ptr<Student> ObjStudent1 = make_unique<Student>();
    ObjStudent1->setName("Maukka Majakka");
    ObjStudent1->setStudentNumber(12345678);
    ObjStudent1->setAverage(7.5);

    cout<<"Nimi = "<<ObjStudent1->getName()<<endl;
    cout<<"Student numero = "<<ObjStudent1->getStudentNumber()<<endl;
    cout<<"Keskiarvo = "<<ObjStudent1->getAverage()<<endl;
    return 0;
}
