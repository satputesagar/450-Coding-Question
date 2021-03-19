#include<iostream>
using namespace std;
/* 
pair struct is used to return two 
value from getMinMax()
*/
struct Pair
{
    int min;
    int max;
};
struct Pair getMinMax(int arr[],int n)
{
    struct Pair minmax;
    int i;
    // if there is only one element
    // then return it as min and max both

    if(n==1)
    {
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    }
    if(arr[0] >arr[1])
    {
          minmax.max=arr[0];
         minmax.min=arr[1];
    }
    else
    {
        minmax.max=arr[1];
        minmax.min=arr[0];
    }
    for(int i =2;i<n;i++)
    {
        if(arr[i] > minmax.max)
        minmax.max=arr[i];
        else if(arr[i]< minmax.min)
        minmax.min=arr[i];
    }
    return minmax;
}

int main()
{
int arr[]={100,11,445,1,330,3000};
int arr_size=6;
struct Pair minmax=getMinMax(arr,arr_size);
cout<<"minimum element is "<<minmax.min<<endl;
cout<<"maximum element is "<<minmax.max<<endl;
return 0;
}
//time complexity : O(n)