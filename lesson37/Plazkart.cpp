#include "Plazkart.h"

void Plazkart::setPlaces(short amountOfplaces)
{
    this->amountOfplaces = amountOfplaces;
}

short Plazkart::getPlaces() const
{
    return amountOfplaces;
}

void Plazkart::show() const
{
    cout << "\t" << type() << endl;
    cout << "Number: " << num << endl;
    cout << "Amount of places: " << amountOfplaces << endl;
}

string Plazkart::type() const
{
    return "Plazkart";
}
