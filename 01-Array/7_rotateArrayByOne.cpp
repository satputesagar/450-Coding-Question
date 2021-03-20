/*
following are steps:
    1. store last element in a variable say X.
    2. shift all elements one position ahead.
    3. Replace first element of array with X.
*/
#include<iostream>
using namespace std;
void rotate(int arr[],int n)
{
    int x =arr[ n - 1];
    for(int i= n - 1; i > 0; i--)
    arr[i]= arr[i -1];
    arr[0]=x;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array is \n";
    for(int i =0;i<n;i++)
    cout<<arr[i]<<" ";
    rotate(arr,n);
    cout<<"\nRotated array is \n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}