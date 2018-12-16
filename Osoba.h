#pragma once
#include <iostream>
enum Osoby  // : podedeny enum : int
{
	OSOBA_DOSPELY = 42,
	OSOBA_POSTAR = 1337,
};

class Osoba
{
public:
	Osoba();
	virtual ~Osoba();
	virtual void nacitaj(std::istream& is) = 0 ;//nededi sa operator ale metoda skor
	virtual void vypis(std::ostream& os) = 0 ;//nededi sa operator ale metoda skor

	friend std::istream& operator >>(std::istream& is, Osoba* b)
	{
		b->nacitaj(is); return is;
	}
	friend std::ostream& operator <<(std::ostream& os, Osoba* b) //takyto zapis aby sa to dalo retazit
	{
		b->vypis(os); return os;
	}
};

