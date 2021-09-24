#include <iostream>
#include <stdlib.h>
using namespace std;

int scanarr(int *arr , int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    return 1;
    
}
void print(int *arr , int n){
    for (int i = n-1; i >= 0 ; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int *arr, n;
    cin >> n;
    arr = (int *)malloc(n * sizeof(int));
    scanarr(arr , n);
    print(arr , n);
    return 0;
}