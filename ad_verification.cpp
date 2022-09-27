#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Base Address is: "<<arr<<endl;

    cout<<"Address of A[5] ";
    cout<<&arr[5]<<endl;
    cout<<"Address of A[5] with formula :";
    cout<<arr+(5-0);
}