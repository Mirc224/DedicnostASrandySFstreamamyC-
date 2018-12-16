#include <iostream>
#include <fstream>
#include "Dospely.h"
#include "Postar.h"
#include <vector>
#include <string>
#include <fstream>

void factorOsoby(std::vector<Osoba*>& osoby, std::istream& is)
{
	int typ;
	while (is >> typ)
	{
	
	switch (typ)
	{
		case OSOBA_DOSPELY:
		{
			Dospely* dospely = new Dospely();
			is >> dospely;
			osoby.push_back(dospely); // toto sme si naimplementovali, aby
			break;
		}
		case OSOBA_POSTAR:
		{
			Postar* postar = new Postar();
			is >> postar;
			osoby.push_back(postar); // toto sme si naimplementovali, aby
			break;
		}
	defalut: break;
	}
	}
}

int main()
{
	int parameter;
	printf("1- preddefinovane objekty, 2 - nacitaj zo suboru vystup.txt \n");
	std::cin >> parameter;
	std::vector<Osoba*> osoby;
	switch (parameter)
	{
		case 1:
		{
			osoby.push_back(new Dospely(250, false, 1));
			osoby.push_back(new Postar(350, true));
			break;
		}
		case 2:
		{
			std::ifstream inputFile("vystup.txt");
			factorOsoby(osoby, inputFile);
			break;
		}
		defalut: 
		break;
	}
	
	std::ofstream outputFile("vystup.txt");
	
	for (Osoba* osoba : osoby)
	{
		outputFile << osoba << std::endl;
	}
	for (Osoba* osoba : osoby)
	{
		delete osoba;
	}
	return 0;
}