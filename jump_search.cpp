#include<iostream>
#include<cmath>
using namespace std;
int jump_search(int A[],int n,int element)
{
    int jump=sqrt(n);
    int i;
    for(i=0;i<n;i+=jump)
    {
        if(A[i]==element)
            {
                return i;
            }
        if(A[i]>element)
        {
            int s=i-jump;
            int e=i-1;
            for(s+1;s<=e;s++)
            {
                if(A[s]==element)
                {
                    return s;
                }
            } 
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
    if(jump_search(arr,n,element)==-1)
    {
        cout<<"Element is not present in array";
    }
    else{
    cout<<"Element found at "<< jump_search(arr,n,element)<<" index";
    }
}