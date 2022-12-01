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
       
}