#include "henkilo.h"

string Henkilo::getNimi() const
{
    return nimi;
}

void Henkilo::setNimi(const string &newNimi)
{
    nimi = newNimi;
}

int Henkilo::getIka() const
{
    return ika;
}

void Henkilo::setIka(int newIka)
{
    ika = newIka;
}

void Henkilo::tulostaTiedot()
{
    cout<<"Nimi = "<<nimi<<" ja ika="<<ika<<endl;
}

Henkilo::Henkilo() {}
