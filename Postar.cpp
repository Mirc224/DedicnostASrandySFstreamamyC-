#include "Postar.h"



Postar::Postar(): plat(0), maAuto(false)
{
}

Postar::Postar(long plat, bool maAuto): plat(plat), maAuto(maAuto)
{
}


Postar::~Postar()
{
}

void Postar::nacitaj(std::istream & is)
{
	is >> plat >> maAuto;
}

void Postar::vypis(std::ostream & os)
{
	os << OSOBA_POSTAR << " "<< plat << " " << maAuto;
}
