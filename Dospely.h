#pragma once
#include "Osoba.h"
class Dospely :
	public Osoba
{
public:
	Dospely();
	Dospely(int vek, bool izinier, int vyska);
	virtual void nacitaj(std::istream& is) override;//nededi sa operator ale metoda skor
	virtual void vypis(std::ostream& os) override;
	virtual ~Dospely();
private:
	int vek;
	bool inzinier;
	int vyska;
};

