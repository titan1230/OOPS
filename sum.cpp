#include <iostream>
using namespace std;

int mat[2][2];
int rowSum, colSum, diagSum;

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
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i==j)
            {
                diagSum = diagSum + mat[i][j];
            } 

            rowSum = rowSum + mat[i][j];
            colSum = colSum + mat[j][i];
        }
        cout << "\nSum of row " << i+1 << " is: " << rowSum << endl;
        cout << "Sum of column " << i+1 << " is: " << colSum << endl;
        rowSum = 0;
        colSum = 0;
    }
    cout << "\nThe sum of diagonal is " << diagSum << endl;
}