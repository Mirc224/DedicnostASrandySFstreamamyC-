#include "Dospely.h"



Dospely::Dospely(): vek(0), inzinier(false), vyska(0)
{
}

Dospely::Dospely(int vek, bool inzinier, int vyska) : vek(vek), inzinier(inzinier), vyska(vyska)
{
}

void Dospely::nacitaj(std::istream& is)
{
	is >> vek >> inzinier >> vyska;
}

void Dospely::vypis(std::ostream& os)
{
	os << OSOBA_DOSPELY << " " << vek << " " << inzinier << " " << vyska; //enum sa da vyuzit factory design pattern
}


Dospely::~Dospely()
{
}
