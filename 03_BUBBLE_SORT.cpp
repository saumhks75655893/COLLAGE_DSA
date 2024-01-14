// ---------------------------- : BUBBLE SHORT ALGORITHM : -----------------------------------

#include <iostream>
using namespace std;
int main()
{

    int a, n;

    cout << "Enter the size of n : ";
    cin >> n;

    int b[n];

    // Inserting the elements of array by user : ---------

    for (int i = 1; i < n+1; i++)
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

    // bubbble short algorithm : --------

    for (int i = 1; i <= n+1; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            if (b[j] > b[j + 1])
            {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    //  Displaying the element after sorting : ----------

    cout << "\n\nElements of the array :  ";
    cout << "{";
    for (int i = 1; i < n+1; i++)
    {
        cout << b[i] << " , ";
    }
    cout << "}";
}