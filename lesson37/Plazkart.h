#pragma once
#include "Vagon.h"

class Plazkart :public Vagon
{
protected:
	short amountOfplaces;

public:
	Plazkart(short num, short amountOfplaces) :Vagon(num) { setPlaces(amountOfplaces); }

	void setPlaces(short amountOfplaces);
	short getPlaces()const;

	void show()const override;
	string type()const override;
};

