#include "Kupe.h"

void Kupe::setBreakfast(bool breakfast)
{
    this->breakfast = breakfast;
}

bool Kupe::getBreakfast() const
{
    return breakfast;
}

void Kupe::show() const
{
    cout << "\t" << type() << endl;
    cout << "Number: " << num << endl;
    cout << "Amount of places: " << amountOfplaces << endl;
    cout << "Breakfast: " << (getBreakfast() ? "Yes" : "No") << endl;
}

string Kupe::type() const
{
    return "Kupe";
}
