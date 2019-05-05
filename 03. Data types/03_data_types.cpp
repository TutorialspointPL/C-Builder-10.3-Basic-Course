/*
    Napisz program który obliczy wskaŸnik BMI z danych od u¿ytkownika (waga + wzrost).
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
#include <iostream> // do cout cin
using namespace std; // do cout cin
#include <conio.h> // do getch()
#include <string> // do stringów

int _tmain(int argc, _TCHAR* argv[])
{
	// Pobieramy imiê
	cout << "Podaj swoje imie : ";
	string imie;
	cin >> imie;

	// Pobieramy wagê w kg
	cout << endl << "Podaj wage w kilogramach : ";
	float waga;
	cin >> waga;

	// Pobieramy wzrost w cm
	cout << "Podaj wzrost w centymetrach : ";
	int wzrost;
	cin >> wzrost;

	// Obliczamy BMI
	float bmi;
	wzrost = wzrost * wzrost; // mianownik wzrost do kwadratu
	bmi = waga/wzrost;
	// przesuwamy przecinek 4 miejsca w prawo w celu uzyskania prawid³owego wyniku BMI
	bmi = bmi * 10000;

    // Prezentujemy wynik na ekranie
	cout << endl << imie << ", twoj wskaznik BMI wynosi : "
		<< bmi << endl << endl << "Nacisnij dowolny klawisz";

	getch();
	return 0;
}
