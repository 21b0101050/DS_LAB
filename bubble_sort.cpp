#include<iostream>
using namespace std;
void bubble_sort(int A[],int n)
{
    for(int i=1;i<n-1;i++)
    {
        for (int j=0;j<n-i;j++)
        {
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }   
        }
    }
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,n);
}