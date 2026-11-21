#include "student.h"

Student::Student(string n, int id):Person(n),studentId(id){

}

void Student::sayStatus()
{
    cout<<"Olen Student nimi="<<this->getName()<<" studentId="<<studentId<<endl;
}
