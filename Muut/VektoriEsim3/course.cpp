#include "course.h"

int Course::getId() const
{
    return id;
}

void Course::setId(int newId)
{
    id = newId;
}

string Course::getName() const
{
    return name;
}

void Course::setName(const string &newName)
{
    name = newName;
}

int Course::getCreditPoints() const
{
    return creditPoints;
}

void Course::setCreditPoints(int newCreditPoints)
{
    creditPoints = newCreditPoints;
}

void Course::printData()
{
    cout<<id<<" | "<<name<<" | "<<creditPoints<<endl;
}

Course::Course() {}

Course::Course(int id, string name, int creditPoints)
{
    this->id=id;
    this->name=name;
    this->creditPoints=creditPoints;
}
