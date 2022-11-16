#include<iostream>
using namespace std;
int n=0;
void ArrayInsert(int A[],int i,int x)
{
    int j;
    for(j=n-1;j>=i;j--)
    {
        A[j+1]=A[j];
    }
    A[i]=x;
    n=n+1;
}
void PQInsert(int A[],int x)
{
    int i=0;
    while(i<n&&x<A[i])
    {
        i++;
    }
    ArrayInsert(A,i,x);
}
int PQDelete(int A[])
{
    int x=A[n-1];
    n=n-1;
    return x;
}

int main()
{
    int a,x;
    int A[n];
    PQInsert(A,4);
    PQInsert(A,10);
    PQInsert(A,15);
    PQInsert(A,1);
    PQInsert(A,2);
    cout<<"Number of elements: "<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    PQDelete(A);
    cout<<"Number of elements: "<<n<<endl;





    

}