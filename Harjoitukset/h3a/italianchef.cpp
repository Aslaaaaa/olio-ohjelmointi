#include "italianchef.h"

ItalianChef::ItalianChef(string n):Chef(n) {
    cout<<"ItalianChef "<<name<<" konstuktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"Italian Chef "<<name<<" destruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}
