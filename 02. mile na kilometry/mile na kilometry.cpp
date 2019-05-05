#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
using namespace std;
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
	// popraœ u¿ytkownika o wartoœæ w milach
	cout << "Podaj predkosc pojazdu w milach na godzine [mph]: ";
	int mph;
	// przypisz wartoœæ od u¿ytkownika do zmiennej mph
	cin >> mph;

	// teraz zadeklaruj zmienn¹ kph i wykonaj niezbêdne dzia³anie w celu zamiany wartoœci
	float kph;
	kph = mph * 1.61;

	// wyœwietl wynik u¿ytkownikowi
	cout << mph << " mil na godzine to " << kph << " kilometrow na godzine.";

	// ¿aby zobaczyæ wynik na ekranie musimy wstrzymac program np. funkcj¹ getch
	getch(); // potrzebujemy dodaæ bib. conio.h

	return 0;
}
