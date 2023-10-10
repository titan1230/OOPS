#include <iostream>
using namespace std;

int mat[2][2];
int transpose[2][2];

int main()
{
    cout << "Enter values for matrix" << endl;
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            int v;
            cout << "Enter element " << i + 1 << "," << j + 1<<": ";
            cin >> v;
            mat[i][j] = v;
            transpose[j][i] = v;
        }
    }

    cout << "\nThe matrix is: "<< endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nThe transpose is: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << "\n";
    }
}