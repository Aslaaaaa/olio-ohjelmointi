#include <iostream>
#include "animal.h"
#include "dog.h"

#include<memory>

using namespace std;

int main()
{
    unique_ptr<Animal> objAnimal1 = make_unique<Animal>();
    unique_ptr<Dog> objDog1 = make_unique<Dog>();
    objAnimal1->callOut();
    objDog1->callOut();

    return 0;
}
