#include <bits/stdc++.h>
using namespace std; 
void reverseString(char arr[], int n)
{
    char arrver[n]; 
    for(int i=0; i<n; i++)
    {
        arrver[i] = arr[n-i-1]; 
    }
    cout<<"The reverse string : ";  
    for(int i=0; i<n; i++)
    {
        cout<<arrver[i]<<"  "; 
    }
    cout<<endl; 
}
int main()
{
    int n;
    cout<<"Enter the number of iteration: "; 
    cin>>n; 

    char arr[n]; 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    reverseString(arr, n); 
    
    return 0; 
}