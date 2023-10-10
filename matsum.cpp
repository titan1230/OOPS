#include<iostream>
using namespace std;


int mat1[2][2];
int mat2[2][2];
int res[2][2];

int main() {

    cout << "Enter values for matrix 1" << endl;
    for (int i=0; i<2; i++) {

        for (int j=0; j<2; j++) {
            cout << "Enter element " << i+1 << "," << j+1 << endl;
            cin >> mat1[i][j];
        }
    }

    cout << "\nEnter values for matrix 2" << endl;
    for (int i=0; i<2; i++) {

        for (int j=0; j<2; j++) {
            cout << "Enter element " << i+1 << "," << j+1 << endl;
            cin >> mat2[i][j];
        }
    }

    for (int i=0; i<2; i++) {

        for (int j=0; j<2; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout << "\nThe sum of the 2 matrix is: " << endl;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
}