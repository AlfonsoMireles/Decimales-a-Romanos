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
      
}