#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vagon
{
protected:
	short num;
public:
	Vagon(short num);
	virtual ~Vagon();

	void setNum(short num);
	short getNum()const;

	virtual void show()const = 0;
	virtual string type()const = 0;
};

