// ------------------------------ :  SELECTION SORT : -------------------------------

#include <iostream>
using namespace std;
int main()
{

    int a, n;

    cout << "Enter the size of n : ";
    cin >> n;

    int b[n];

    // Inserting the elements of array by user : ---------

    for (int i = 1; i < n + 1; i++)
    {
        cout << "Enter the  " << i << "  element. ";
        cin >> b[i];
    }

    // Displaying the elements of array : ---------
    cout << "Elements of the array : ";
    cout << "{";
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " , ";
    }
    cout << "}";

    // SELECTION SORT : -------------

    for (int i = 1; i <= n - 1; i++)
    {
        int min = b[i];
        for (int j = i + 1; j <= n; j++)
        {
            if (b[j] < b[min])
            {
                min = b[j];
            }
        }
        if (b[i] != b[min])
        {
            int temp = b[i];
            b[i] = b[min];
            b[min] = temp;
        }
    }
    // Displaying the elements of sorted array : ---------
    cout << "\n\nElements of the array : ";
    cout << "{";
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " , ";
    }
    cout << "}";
}