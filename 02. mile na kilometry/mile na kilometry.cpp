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
	// popra� u�ytkownika o warto�� w milach
	cout << "Podaj predkosc pojazdu w milach na godzine [mph]: ";
	int mph;
	// przypisz warto�� od u�ytkownika do zmiennej mph
	cin >> mph;

	// teraz zadeklaruj zmienn� kph i wykonaj niezb�dne dzia�anie w celu zamiany warto�ci
	float kph;
	kph = mph * 1.61;

	// wy�wietl wynik u�ytkownikowi
	cout << mph << " mil na godzine to " << kph << " kilometrow na godzine.";

	// �aby zobaczy� wynik na ekranie musimy wstrzymac program np. funkcj� getch
	getch(); // potrzebujemy doda� bib. conio.h

	return 0;
}
