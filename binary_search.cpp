#include<iostream>
using namespace std;
//************************************************************************

void binary_search(int A[],int n,int target)
{
    int s=0;
    int e=n-1;
    int mid=0;
    while(s<=e)
    {        
        mid=(s+e)/2;
        if(A[mid]==target)
        {
            cout<< mid;
            break;
        }
        else{
            if(A[mid]<target)
            {
                s=mid+1;
            }
            if(A[mid]>target)
            {
                e=mid-1;
            }
        }
    }  
}
//*******************************************************************************
int main()
{
    int s,e,n,target;
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
    binary_search(arr,n,target);
}