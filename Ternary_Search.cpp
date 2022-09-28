#include<iostream>
using namespace std;
int Ternary_Search(int A[],int l,int r,int element)
{
    while(r>=l)
    {
        int mid1=l+(r-l)/3;
        int mid2=mid1+(r-l)/3;
        if(A[mid1]==element)
        {
            return mid1;
        }
        if(A[mid2]==element)
        {
            return mid2;
        }
        if(element<A[mid1])
        {
            r=mid1-1;
        }
        if(element>A[mid2])
        {
            l=mid2+1;
        }
        else
        {
            l=mid1+1;
            r=mid2-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the Number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to search: ";
    int element;
    cin>>element;
    if(Ternary_Search(arr,0,n-1,element)==-1)
    {
        cout<<"Element is not present in array";
    }
    else
    cout<<"Element found at "<<Ternary_Search(arr,0,n-1,element)<<" index";
}