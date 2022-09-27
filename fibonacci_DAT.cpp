#include<iostream>
using namespace std;
int fib(int n,int DAT[],int i)
{
    if (i==0)
    {
        DAT[0]=0;
    }
    else
    {
        if(i==1)
        {
            DAT[1]=1;
        }
        else
        {
            if (DAT[i]==0)
            {
                DAT[i]=fib(n,DAT,i-1)+fib(n,DAT,i-2);
            } 
        }
    }
    return DAT[i];
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int DAT[n];
    for(int i=0;i<n;i++)
    DAT[i]=0;
    for(int i=0;i<n;i++)
    {
        cout<<fib(n,DAT,i)<<" ";
    }
}