#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of matrix: ";
    cin>>n;
    int arr1[n][n];
    int arr2[n][n];
    //int arr3[n][n];
    cout<<"Enter elements of First Matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr1[j][i]<<" ";
        }
        cout<<endl;
    }

}