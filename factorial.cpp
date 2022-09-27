#include<iostream>
using namespace std;
int factorial(int a)
{
    int fact=1;
    if(a==0)
    {
        return 1;
    }
    else{
        fact=a*factorial(a-1);
    }
    return fact;
}
int main()
{
    int n;
    cout<<" Enter Number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: ";
    cout<<factorial(n);
}