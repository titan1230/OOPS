#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    int max1, max2, max3;

    for (int i=0; i<n; i++) 
    {
        cout << "Enter array element: ";
        cin >> arr[i];
    }
    
    max1 = max2 = max3 = arr[0];
    
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3)
        {
            max3 = arr[i];
        }
        
    }
    
    cout << "The third lasrgest element is " << max3;
}