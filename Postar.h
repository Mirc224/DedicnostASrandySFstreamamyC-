#pragma once
#include "Osoba.h"
class Postar :
	public Osoba
{
public:
	Postar();
	Postar(long plat, bool maAuto);
	virtual ~Postar();

	virtual void nacitaj(std::istream& is) override;//nededi sa operator ale metoda skor
	virtual void vypis(std::ostream& os) override;
private:
	long plat;
	bool maAuto;
};

