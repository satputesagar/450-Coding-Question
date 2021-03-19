#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,3,4,6,7,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" , ";

    }
    cout<<endl;
    reverse(arr,0,n-1);
    //start point 0 and end point n-1
    cout<<"reversed array is :\n"<<endl;
    for(int i =0;i< n; i++)
    {
        cout<<arr[i]<<" , ";
    }
    return 0;
}
//time comlexity : O(n)