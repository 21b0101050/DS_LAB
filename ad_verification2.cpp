#include<iostream>
using namespace std;
int main()
{
    int arr[4][5];
    int i=2,j=3,x;
    cout<<"Base Address is: "<<arr[0]<<endl;

    cout<<"Address of A[2][3] ";
    cout<<&arr[2][3]<<endl;
    cout<<"Address of A[2][3] with formula :";
    x=(i-0)*(4-0+1)+(j-0);
    cout<<arr[0]+x;
}