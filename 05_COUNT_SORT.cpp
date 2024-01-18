#include <bits/stdc++.h>
using namespace std;
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
void countSort(int arr[], int n)
{
    int i, j;
    int max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum number in the array is : " << max << endl;

    // create an array of size max

    int *count = new int(max);

    // Initialize array a element's with 0

    for (i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    // Increment the corresponding index in the count array
    for (i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }
    for (i = 0; i <= max; i++)
    {
        cout<<count[i]<<" "; 
    }
    cout<<endl; 

    i = 0;   // counter for count array
    j = 0;  // counter for given array "arr"

    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i; 
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int n; 
    cout<<"Enter the size of the array : "; 
    cin>>n; 
    int arr[n]; 
    cout<<"Enter the elements of the array : "; 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout << "Unsorted array is : ";
    printArray(arr, n);
    countSort(arr, n);
    cout<<"Sorted array is  : "; 
    printArray(arr, n);

    return 0; 
}