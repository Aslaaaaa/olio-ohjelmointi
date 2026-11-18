#ifndef COURSE_H
#define COURSE_H
#include <iostream>

using namespace std;
/*
 * kullakin kurssilla on:
 * id, nimi, laajuus(opintopisteet)
 */

class Course
{
private:
    int id;
    string name;
    int creditPoints;
public:
    Course();
    Course(int id, string name, int creditPoints);
    int getId() const;
    void setId(int newId);
    string getName() const;
    void setName(const string &newName);
    int getCreditPoints() const;
    void setCreditPoints(int newCreditPoints);
    void printData();
};

#endif // COURSE_H
