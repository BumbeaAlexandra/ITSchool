// TemaProdusWhile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int produs()
{
    int numar, produs = 1;
    cout << "Introduceti un numar de la tastatura:\n";
    cin >> numar;

    int i = 1;
    while (i <= numar)
    {
        produs *= i;
        i++;
    }

    return produs;
}

int main()
{
    cout << "Produsul numerelor este: " << produs();
}
