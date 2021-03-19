#include<iostream>
using namespace std;
void sort012(int a[],int n)
{
    int c0=0,c1=0,c2=0;
    for(int i =0;i<n;i++)
    {
        if(a[i]==0)
        c0++;
        else if(a[i]==2)
        c2++;
        else
        c1++;
    }
    for(int i =0;i<n;i++)
    {
        if(i>=0 && i<c0)
        a[i]=0;
        else if(i>=c0 && i<c0+c1)
        a[i]=1;
        else
        a[i]=2;
    }
}
//time complexit :O(n)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++)
        cin>>a[i];

        sort012(a,n);
        for(int i =0;i<n;i++){
        cout<<a[i]<<" ";}
        cout<<endl;
    }
    return 0;
}