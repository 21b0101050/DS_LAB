#include<iostream>
#include<stdlib.h>
using namespace std;
void Traverse(int *ptr,int n)
{
    int i;
    for(i=0;i<=n-1;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
}
int main()
{
    int *p,i;
    int A[10]={10,20,30,40,50,60,70,80,90,100};
    p=&A[0];
    for(i=0;i<=9;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<=9;i++
    )
    {
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    for(i=0;i<=9;i++)
    {
        cout<<*(A+i)<<" ";
    }
    cout<<endl;
    Traverse(A,10);
    
}