#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>  // wymagane do funkcji cout
using namespace std;
#include <conio.h>  // wymagane do funkcji getch

int _tmain(int argc, _TCHAR* argv[]) 
{
	// wy�wietl napis "Hello World!"
	cout << "Hello World!";

	// �eby zobaczy� wyniki trzeba wstrzyma� na chwil� program
	getch();

	return 0;
}
