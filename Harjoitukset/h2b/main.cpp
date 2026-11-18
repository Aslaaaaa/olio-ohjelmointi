#include <iostream>
#include "car.h"
#include<vector>

using namespace std;



int main()
{
    vector<Car> carList;

    carList.push_back(Car("Toyota","Corolla",2005));
    carList.push_back(Car("Volkswagen","Tiguan",2007));
    carList.push_back(Car("BMW","i4",2021));

    carList[1].printData();

    for (size_t i=0; i<carList.size(); i++){
        cout<<"------------------------"<<endl;
        carList[i].printData();
    }

    return 0;
}
