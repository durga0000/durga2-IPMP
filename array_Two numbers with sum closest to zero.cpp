#include<bits/stdc++.h>
using namespace std;
int compair(int x,int y)
{
    return abs(x)<abs(y);
}
void sor(int arr[],int n)
{
    sort(arr,arr+n,compair);
    int x,y;
    int min=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i-1]+arr[i])<=min)
        {
            min=abs(arr[i-1]+arr[i]);
            x=i-1;
            y=i;
        }
    }
    cout<<arr[x]<<arr[y];
}
int main()
{
    int arr[]={1,-2,4,5,10,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    sor(arr,n);
    
}
