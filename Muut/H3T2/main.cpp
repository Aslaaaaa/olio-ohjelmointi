#include <iostream>
#include "person.h"
#include "student.h"
#include "teacher.h"

using namespace std;

int main()
{
    Person objPerson("Ville");
    Student objStudent("Maija", 501);
    Teacher objTeacher("Markku", 313);

    objPerson.sayStatus();
    objStudent.sayStatus();
    objTeacher.sayStatus();

    return 0;
}
