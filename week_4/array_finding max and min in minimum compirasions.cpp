#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int a[n];
    for(int j=0;j<n;j++)
    a[j];
    int max,min;
    int i;
  
    if(n%2==0)
    {
        if(a[0]>a[1])
        {
            max=a[0];
            min=a[1];
        }
        else
        {
            max=a[1];
            min=a[0];
        }
        i=2;
    }
    else
    {
        min=a[0];
        max=a[0];
        i=1;
    }
    
    while(i<n)
    {
        if(a[i]>a[i+1])
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i+1]<min)
            min=a[i+1];
        }
        else
        {
            if(a[i]<min)
            min=a[i];
            if(a[i+1]>max)
            max=a[i+1];
        }
        i=i+2;
    }
    cout<<max<<min;
    
}

