#include <iostream>

using namespace std;


int main()
{
    cout << "IPZI-18k" << endl;
    cout << "Lyaschuk Evgeniy Nikolaevich " << endl;
    cout << "Tema 1.1.3." << endl;
    cout << "Zavdannya 60" << endl;

    int a[10];
    int b[10];

    int c[20];


    cout << "Array A: ";
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < 10; i++)
    {
        b[i] = rand() % 100;
        cout << b[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
        c[i] = a[i];

    for (int i = 0; i < 10; i++)
        c[i + 10] = b[i];

    cout << "Array C: ";
    for (int i = 0; i < 20; i++)
        cout << c[i] << " ";

    cout << endl;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 19; j++)
            if (c[j] > c[j + 1])
                swap(c[j], c[j + 1]);

    cout << "Sorted array C: ";
    for (int i = 0; i < 20; i++)
        cout << c[i] << " ";
}
