#include<iostream>
using namespace std;
//************************************************************
void setJoin(int A[],int M,int B[],int N)
{
    int C[10],i=0,j=0,k=0;
    while(i<M && j<N)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];
            i++;
            k++;
        }
        else{
            C[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<M)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<N)
    {
        C[k]=B[j];
        k++;
        j++;
    }
    cout<<"Merged Array is: ";
    for(i=0;i<M+N;i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}
//*****************************************************************************
void setUnion(int A[],int M,int B[],int N){
    int C[10];
    int i=0;
    int j=0;
    int k=0;
    while(i<M && j<N){
        if(A[i]<B[j]){
            C[k]=A[i];
            i++;
            k++;
        }
        else{
            if(B[j]<A[i]){
                C[k]=B[j];
                j++;
                k++;
            }
            else{
                C[k]=A[i];
                i++;
                j++;
                k++;
            }
            
        }
    }
    while(i<M){
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<N){
        C[k]=B[j];
        k++;
        j++;
    }
    cout<<"Union is: ";
    for(i=0;i<k;i++){
        cout<<C[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}
//--**************************************************************************
void setIntersection(int A[],int M,int B[],int N)
{
    int C[10];
    int i=0;
    int j=0;
    int k=0;
    while(i<M && j<N)
    {
        if(A[i]<B[j])
        {
            //C[k]=A[i];
            i++;
            //k++;
        }
        else
        {
            if(B[j]<A[i])
            {
                //C[k]=B[j];
                j++;
                //k++;
            }
            else{
                C[k]=A[i];
                i++;
                j++;
                k++;
            }
            
        }
    }
    // while(i<M)
    // {
    //     C[k]=A[i];
    //     i++;
    //     k++;
    // }
    // while(j<N)
    // {
    //     C[k]=B[j];
    //     k++;
    //     j++;
    // }
    cout<<"Intersection is: ";
    for(i=0;i<k;i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}
//********************************************************
void setDifference(int A[],int M,int B[],int N)
{
    int C[10],i=0,j=0,k=0;
    while(i<M && j<N)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];
            i++;
            k++;
        }
        else
        {
            if(B[j]<A[i])
            {
                C[k]=B[j];
                j++;
                k++;
            }
            else{
                i++;
                j++;     
            }
            
        }
    }
    while(i<M)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    cout<<"Difference (A-B) is: ";
    for(i=0;i<k;i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
}
//--**************************************************************************
void setDifference2(int A[],int M,int B[],int N)
{
    int C[10];
    int i=0;
    int j=0;
    int k=0;
    while(i<M && j<N)
    {
        if(A[i]<B[j])
        {
            //C[k]=A[i];
            i++;
            //k++;
        }
        else
        {
            if(B[j]<A[i])
            {
                C[k]=B[j];
                j++;
                k++;
            }
            else{
                //C[k]=A[i];
                i++;
                j++;
                //k++;
                
            }
            
        }
    }
    // while(i<M)
    // {
    //     C[k]=A[i];
    //     i++;
    //     k++;
    // }
    while(j<N)
    {
        C[k]=B[j];
        k++;
        j++;
    }
    cout<<"Difference (B-A) is: ";
    for(i=0;i<k;i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}
//--**************************************************************************
void setSymDiff(int A[],int M,int B[],int N)
{
    int C[10];
    int i=0;
    int j=0;
    int k=0;
    while(i<M && j<N)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];
            i++;
            k++;
        }
        else
        {
            if(B[j]<A[i])
            {
                C[k]=B[j];
                j++;
                k++;
            }
            else{
                i++;
                j++;          
            }
            
        }
    }
    while(i<M)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<N)
    {
        C[k]=B[j];
        k++;
        j++;
    }
    cout<<"Symmetric Difference is: ";
    for(i=0;i<k;i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}
//--**************************************************************************
int main()
{
    int A[5]={1,2,4,5,6};
    int B[5]={4,5,6,7,8};
    cout<<"Set1: ";
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Set2: ";
    for(int i=0;i<5;i++)
    {
        cout<<B[i]<<" ";
    }
    cout<<endl;
    setJoin(A,5,B,5);
    setUnion(A,5,B,5);
    setIntersection(A,5,B,5);
    setDifference(A,5,B,5);
    setDifference2(A,5,B,5);
    setSymDiff(A,5,B,5);
    
}