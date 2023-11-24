#pragma once
#include "Plazkart.h"
class Kupe :public Plazkart
{
	bool breakfast;
public:
	Kupe(short num, short amountOfplaces, bool breakfast) :Plazkart(num, amountOfplaces) { setBreakfast(breakfast); }

	void setBreakfast(bool breakfast);
	bool getBreakfast()const;

	void show()const override;
	string type()const override;
};

