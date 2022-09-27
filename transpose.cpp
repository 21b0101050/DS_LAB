#include<iostream>
using namespace std;
int main()
{
    int m,n,j;
    cout<<"Enter the size of matrix: ";
    cin>>m>>n;
    int arr1[10][10],arr2[10][10];
    cout<<"Enter elements of  Matrix: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            arr2[j][i]=arr1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

}