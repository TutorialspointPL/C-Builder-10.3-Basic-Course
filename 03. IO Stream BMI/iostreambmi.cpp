#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>  // cout cin
using namespace std;
#include <conio.h>   // getch
#include <string>    // string

int _tmain(int argc, _TCHAR* argv[]) 
{
	cout << "Your name: ";
	string name;
	cin >> name;

	cout << endl << "Your weight in kilograms: ";
	float weight;
	cin >> weight;

	cout << "Your height in centimeters: ";
	int height;
	cin >> height;

	float bmi,height2;
	height2 = height *  height;
	bmi = weight / height2;
	bmi = bmi* 10000;

	cout << endl << name << ", Your BMI index is: "
		<< bmi << endl << endl << "Press any key";

	getch();

	return 0;
}
