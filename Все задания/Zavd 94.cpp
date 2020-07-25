#include <iostream>

using namespace std;

int main()
{
    cout << "IPZI-18k" << endl;
    cout << "Lyaschuk Evgeniy Nikolaevich " << endl;
    cout << "Tema 1.3.2." << endl;
    cout << "Zavdannya 94" << endl;

    int arr[9][3];
    int n = 10;

    for (int r = 0; r < 9; r++)
    {
        arr[r][0] = r - 2;
        arr[r][1] = r - 1;
        arr[r][2] = r;

        cout << arr[r][0] << "\t" << arr[r][1] << "\t" << arr[r][2];
    }
}
