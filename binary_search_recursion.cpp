#include<iostream>
using namespace std;
int binary_search(int A[],int low,int high,int key)
{
    int mid;
    if(low<=high)
    {
        mid=(low+high)/2;
        if(A[mid]==key)
        {
            return mid;
        }
        else{
            if(key<A[mid])
            {
                binary_search(A,low,mid-1,key);
            }
            else{
                binary_search(A,mid+1,high,key);
            }
        }
    }
    else{
        return -1;
    }
}
int main()
{
    int n,key;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element to search: ";
    cin>>key;
    cout<<binary_search(a,0,n-1,key);
}