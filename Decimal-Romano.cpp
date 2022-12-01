#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "ingrese un numero" << endl;
    cin >> x;
    if ((x < 1) || (x > 999))
        cout << "Ingrese un numero entre 0-999" << endl;
    else

    {

        if (x >= 900) { cout << "CM"; x = x - 900; }
        if (x >= 500) { cout << "D"; x = x - 500; }
        if (x >= 400) { cout << "CD"; x = x - 400; }
        if (x >= 300) { cout << "C"; x = x - 100; }
        if (x >= 200) { cout << "C"; x = x - 100; }
        if (x >= 100) { cout << "C"; x = x - 100; }
        if (x >= 90) { cout << "XC"; x = x - 90; }
        if (x >= 50) { cout << "L"; x = x - 50; }
        if (x >= 40) { cout << "XL"; x = x - 40; }
        if (x >= 30) { cout << "X"; x = x - 10; }
        
}