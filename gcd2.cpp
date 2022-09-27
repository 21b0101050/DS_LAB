#include<iostream>
using namespace std;
int gcd2(int a,int b)
{
    if(a==b)
    {
        return a;
    }
    else{
        if(a>b)
        {
            gcd2(a-b,b);
        }
        else{
            gcd2(a,b-a);
        }
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD is: "<<gcd2(a,b);
}