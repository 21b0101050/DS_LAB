#include<iostream>
using namespace std;
int n;
void PQinsert(int A[],int data)
{
    int x,y,t;
    A[n]=data;
    x=n;
    y=(n-1)/2;
    while(x>0&&A[x]<A[y])
    {
        t=A[x];
        A[x]=A[y];
        A[y]=t;
        x=y;
        y=(x-1)/2;
    }
    n=n+1;
}
void Minheapify(int A[],int i)
{
    while((2*i+1)<=n-1)
    {
        int l,r,min,t;
        l=2*i+1;
        r=2*i+2;
        min=l;
        if(r<=n-1)
        {
            if(A[r]<A[l])
            {
                min=r;
            }
        }
        if(A[min]<A[i])
        {
            t=A[min];
            A[min]=A[i];
            A[i]=t;
        }
        else
        {
            break;
        }
        i=min;
    }
}
int PQdelete(int A[])
{
    int x=A[0];
    A[0]=A[n-1];
    n=n-1;
    Minheapify(A,0);
    return x;
}
int main()
{
    int A[n];
    cout<<"Initial no of Elements: "<<n<<endl;
    PQinsert(A,10);
    PQinsert(A,20);
    PQinsert(A,30);
    PQinsert(A,40);
    PQinsert(A,50);
    cout<<PQdelete(A)<<endl;
    cout<<PQdelete(A)<<endl;
    cout<<"Final no of elements: "<<n<<endl;

}