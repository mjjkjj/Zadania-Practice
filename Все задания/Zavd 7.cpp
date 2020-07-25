#include <iostream>
#include <string>


using namespace std;


int main()
{
    cout << "IPZI-18k" << endl;
    cout << "Lyaschuk Evgeniy Nikolaevich " << endl;
    cout << "Tema 1.1.1." << endl;
    cout << "Zavdannya 7" << endl;

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }

    int z;
    int count_zmin = 0;

    cout << "Enter Z: ";
    cin >> z;


    for (int i = 0; i < 10; i++)
        if (arr[i] > z)
        {
            arr[i] = z;
            count_zmin++;
        }

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    cout << "Count zmin " << count_zmin << endl;
}