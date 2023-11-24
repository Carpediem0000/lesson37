#include "Vagon.h"

Vagon::Vagon(short num)
{
    setNum(num);
}

Vagon::~Vagon()
{
}

void Vagon::setNum(short num)
{
    this->num = num;
}

short Vagon::getNum() const
{
    return num;
}
