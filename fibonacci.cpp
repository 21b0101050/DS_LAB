#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    int x;
    for(int i=1;i<=100;i++)
    {
        x=fibonacci(i);
        cout<<"("<<i<<")"<<" "<<x<<" ";
    }
}
