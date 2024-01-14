#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void countSort(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum size of the array is : " << max << endl;

    // creating dynamic array
    int *count = new int[max];

    // value 0 in all indeces in count array
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    // print 0 with count array
    for (int i = 0; i <= max; i++)
    {
        cout << count[i] << " ";
    }
    cout << endl;

    // increase the according to the value
    for (int i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }
    // printing the increases the element array
    for (int i = 0; i <= max; i++)
    {
        cout << count[i] << " ";
    }
    cout << endl;

    // sort the array into main array
    int i = 0;
    int j = 0;
    while (i <= count[max])
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

    // priting the sorted array . 
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// driver code 
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unsorted array : ";
    printArray(arr, n);
    
    // countSort function calling 
    countSort(arr, n);
    
    // Sorted array printing by using printArray function. 
    cout << "Sorted array is : ";
    printArray(arr, n);
}