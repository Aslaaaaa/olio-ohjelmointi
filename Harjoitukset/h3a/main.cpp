#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    // Chef objChef1("Gordon Ramsay");
    // objChef1.makeSalad();
    // objChef1.makeSoup();

    ItalianChef objItChef1("Anthony Bourdain");
    objItChef1.makeSalad();
    objItChef1.makeSoup();
    objItChef1.makePasta();
    cout<<"name of the Italian Chef is "<<objItChef1.getName()<<endl;

    return 0;
}
