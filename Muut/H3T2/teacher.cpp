#include "teacher.h"

Teacher::Teacher(string n, int id):Person(n), departmentId(id) {

}

void Teacher::sayStatus()
{
    cout<<"Olen Teacher, nimi="<<this->getName()<<", osastoni id="<<departmentId<<endl;
}
