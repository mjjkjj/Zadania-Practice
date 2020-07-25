#include <iostream>

using namespace std;

#define N 10
int main()
{
    cout << "IPZI-18k" << endl;
    cout << "Lyaschuk Evgeniy Nikolaevich " << endl;
    cout << "Tema 1.3.1." << endl;
    cout << "Zavdannya 80" << endl;

    int matrix[N][N];
    int k = 2;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matrix[i][j] = rand() % 100;

    cout << "Base matrix \n";
    for (int i = 0; i < N; i++)
    {
        cout << endl;
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << "\t";
    }

    int item = matrix[k][k];

    for (int i = 0; i < N; i++)
        matrix[k][i] /= item;

    cout << endl;
    cout << "End matrix \n";
    for (int i = 0; i < N; i++)
    {
        cout << endl;
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << "\t";
    }
}
