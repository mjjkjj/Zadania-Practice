#include <iostream>

using namespace std;

int main()
{
    cout << "IPZI-18k" << endl;
    cout << "Lyaschuk Evgeniy Nikolaevich " << endl;
    cout << "Tema 2.1.1." << endl;
    cout << "Zavdannya 157" << endl;

    int a[12];
    double b[6];


    cout << "Array A: ";
    for (int i = 0; i < 12; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }

    int c = 0;

    cout << endl;
    cout << "Array B: ";
    for (int i = 0; i < 11; i += 2)
    {
        b[c] = (double)(a[i] + a[i + 1]) / 2;
        c++;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << b[i] << " ";
    }
}
