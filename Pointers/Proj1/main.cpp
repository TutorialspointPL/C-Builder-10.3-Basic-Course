#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) 
{
    // deklaracja zmiennej typu int
    // i przypisanie jej wartosci
    int liczba = 10;

    // deklaracja wskaznika
    int *wskaznik;

    // przypisanie do wskaznika adresu zmiennej
    wskaznik = &liczba;
    // wskaznik wskazuje na adres zmiennej liczba

    // wyswietlenie adresu ze wskaznika
    cout << "Adres ze wskaznika : " << wskaznik;

    // wyswietlenie wartosci zmiennej na ktora
    // wsazuje wskaznik
    cout << endl << "Wartosc zmiennej na ktora wskazuje wskaznik : " << *wskaznik;

    cin.get();

	return 0;
}
