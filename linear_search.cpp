#include<iostream>
using namespace std;
//******************************************************

void linear_search(int A[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==target)
        {
            cout<<target<<" is found at "<<i<<" index"<<endl;
        }
    }
}
//*********************************************************
int main()
{
    int n,target;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to find: ";
    cin>>target;
    linear_search(arr,n,target);
}