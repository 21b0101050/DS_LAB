#include<iostream>
using namespace std;
void input(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
}
void print(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int *p;
    p=(int*)malloc(n*sizeof(int));
    input(p,n);
    print(p,n);
return 0;
}