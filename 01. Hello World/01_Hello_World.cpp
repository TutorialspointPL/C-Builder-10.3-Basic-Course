/* ----------------------------------------------------------------------------
	Napisz program kt�ry wy�wietli na ekranie napis "Hello World!"
	i poczeka na zamkni�cie do momentu wci�ni�cia przez uzytkownika jakiego�
	klawisza z klawiatury.

	Nowe umiej�tno�ci:
	- prezentowanie danych na ekranie u�ytkownika
---------------------------------------------------------------------------- */

#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

//-- dodane
#include <iostream>
using namespace std;
#include <conio.h>
//-- koniec



int _tmain(int argc, _TCHAR* argv[]) 
{
	// 1. prze�lij na ekran napis "Hello World"
	cout << "Hello World!";
    // 2. zatrzymaj program w celu zobaczenia napisu na ekranie
	getch();

	return 0;
}
