#include <iostream>

using namespace std;

int main()
{
    cout << "IPZI-18k" << endl;
    cout << "Lyaschuk Evgeniy Nikolaevich " << endl;
    cout << "Tema 2.2.3." << endl;
    cout << "Zavdannya 206" << endl;

    int count_cifr = 1;
    int chislo;

    cout << "Enter chislo: ";
    cin >> chislo;

    while ((chislo /= 10) > 0)
        count_cifr++;

    cout << "Count cifr " << count_cifr << endl;
}
