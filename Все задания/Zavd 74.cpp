#include <iostream>

using namespace std;

int main()
{
    cout << "IPZI-18k" << endl;
    cout << "Lyaschuk Evgeniy Nikolaevich " << endl;
    cout << "Tema 1.2.1." << endl;
    cout << "Zavdannya 74" << endl;

    int a[10];
    int count = 0;
    int tmp;


    cout << "Array: ";
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 9; j++)
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                count++;
            }

    cout << endl;
    cout << "Count moves: " << count << endl;
    cout << "Sorted array: ";

    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
}
