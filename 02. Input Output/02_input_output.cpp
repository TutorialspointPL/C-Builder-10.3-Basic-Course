/*
	Napisz program który zamieni prêdkoœæ podan¹ w milach na godzinê
    na kilometry na godzinê.
*/

#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

// dodane
// do COUT, CIN
#include <iostream>
using namespace std;
// do getch()
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    // text wyswietlany uzytkownikowi
	cout << "Podaj predkosc pojazdu w milach na godzine [mph]: ";
	// deklaracja zmiennej mile do przechowywania danych od uzytkownika
	int mph; // od mile per hour
	// pobranie danych od uzytkownika
	cin >> mph;
	// deklaracjaNocrc zmiennej do przechowania zamiany mil na kilometry
	float kph; // od kilometer per hour
	kph = mph * 1.61;
	// wyswietlenie uzytkownikowi informacji o wartosci przeliczenia
	cout << mph << " mil na godzine to " << kph << " kilometrow na godzine";
	// zatrzymanie aplikacji a¿ do nacisniecia jakiegos klawisza na klawiaturze
	cout << endl << endl << "nacisnij jakis klawisz";
	getch();
	return 0;
}
