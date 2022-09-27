#include<iostream>
using namespace std;
void Insertion_sort(int a[],int n)
{
    int i,j,x;
    for(i=1;i<=n-1;i++)
    {
        x=a[i];
        j=i-1;
        while(a[j]>x)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=x;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the unsorted array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Insertion_sort(a,n);
}