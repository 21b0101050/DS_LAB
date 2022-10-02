#include<iostream>
using namespace std;
int Merge(int A[],int s,int mid,int e)
{
    int C[100];
    int i=s,j=mid+1,k=s;
    while(i<=mid && j<=e)
    {
        if(A[i]<A[j])
        {
            C[k]=A[i];
            k++;
            i++;
        }
        else
        {
            C[k]=A[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        C[k]=A[i];
        k++;
        i++;
    }
    while(j<=e)
    {
        C[k]=A[j];
        k++;
        j++;
    }
    for(int i=s;i<=e;i++)
    {
        A[i]=C[i];
    }
}
int MergeSort(int A[],int s,int e)
{
    int mid;
    if(s<e)
    {
        mid=(s+e)/2;
        MergeSort(A,s,mid);
        MergeSort(A,mid+1,e);
        Merge(A,s,mid,e);
    }
}
int main()
{
    int n,l=0;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements for sorting: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    MergeSort(arr,l,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}