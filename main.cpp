#include <iostream>
#include "basicmath.h"

using namespace std;

int main()
{
    float x,y;
    char c;

    cout << "Proszę wpisz 1. liczbę: ";
    cin >> x;
    cout << "Proszę wpisz 2. liczbę: ";
    cin >> y;
    cout << "Proszę wpisz znak działania: ";
    cin >> c;

    cout << "Wynik działania " << x << c << y << " to ";

    switch(c)
    {
    case '+':
        cout << x+y;
        break;
    case '-':
        cout << x-y;
        break;
    case '*':
        cout << x*y;
        break;
    case '/':
        cout << divide(x,y);
        break;
    default:
        cout << endl << "Nieprawidłowe działanie";
        break;
    }
    return 0;
}
