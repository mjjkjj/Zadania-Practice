#include <iostream>

using namespace std;

int main()
{
    cout << "IPZI-18k" << endl;
    cout << "Lyaschuk Evgeniy Nikolaevich " << endl;
    cout << "Tema 2.1.1" << endl;
    cout << "Zavdannya 249" << endl;

    string text;

    cout << "Eenter text :";
    cin >> text;


    cout << "Chars dont repeat: ";
    for (int i = 0; i < text.length(); i++)
    {
        bool hasFound = false;
        for (int j = 0; j < text.length(); j++)
        {
            if (text[i] == text[j] && j != i)
                hasFound = true;
        }

        if (!hasFound)
            cout << text[i] << " ";
    }

}
