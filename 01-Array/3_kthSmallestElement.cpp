#include<iostream>
#include<algorithm>
using namespace std;
//time complexity : o(n^2)
int kthsmallest(int arr[],int l,int r,int k)
{
    int temp;
    for(int i=0;i< k;i++)
    {
        for(int j=i+1 ;j<r+1 && i < r;j++)
        {
            if(arr[j]< arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[k-1];
}
/*
int kthSmallest(int arr[],int l,int r,int k){
    sort(arr,arr+r+1);
    return arr[k-1];
}
*/


int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        for(int i =0;i<number_of_elements;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        cout<<kthsmallest(a,0,number_of_elements-1,k)<<endl;

    }
    return 0;
}