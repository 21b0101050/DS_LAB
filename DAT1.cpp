#include<iostream>
#include<string>
using namespace std;
//****************************************************************
void repeated(int A[],int n)
{
    int max=A[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    int B[max+1]={0};
    for(int i=0;i<n;i++)
    {
        B[A[i]]+=1;
    }
    for(int i=0;i<max+1;i++)
    {
        if(B[i]>1)
        {
            cout<<i<<" is repeated "<<B[i]<<" times"<<endl;
        }
    }    
}
//*************************************************************************
void not_repeated(int A[],int n)
{
    int max=A[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    int B[max+1]={0};
    for(int i=0;i<n;i++)
    {
        B[A[i]]+=1;
    }
    for(int i=0;i<max+1;i++)
    {
        if(B[i]==0||B[i]==1)
        {
            cout<<i<<" is not repeated "<<endl;
        }
    }    
}
//*********************************************************************************
void char_repeated(string A)
{
    //int max=A[0];
    int i=0;
    // for(i=0;i<n;i++)
    // {
    //     if(A[i]>max)
    //     {
    //         max=A[i];
    //     }
    // }
    int B[25+1]={0};
    while(A[i]!='\0')
    {
        B[A[i]-97]+=1;
        i++;
    }
    for(int i=0;i<25+1;i++)
    {
        if(B[i]>1)
        {
            cout<<char(i+97)<<" is repeated "<<B[i]<<"th times"<<endl;
        }
    }    
}
//**********************************************
void Anagram(string A,string C)
{
    //int max=A[0];
    int i=0;
    // for(i=0;i<n;i++)
    // {
    //     if(A[i]>max)
    //     {
    //         max=A[i];
    //     }
    // }
    int B[25+1]={0};
    while(A[i]!='\0')
    {
        B[A[i]-97]+=1;
        i++;
    }
    while(C[i]!='\0')
    {
        B[C[i]-97]-=1;
        i++;
    }
    int flag=1;
    while(B[i]!='\0')
    {
        if(B[i]!=0)
        {
            cout<<"Not Anagram";
            flag=0;
            break;
        }
        else{
            flag=1;
        }
        i++;
    }
    if(flag==1)
    {
        cout<<"Anagram";
    }


}
//**********************************************

int main()
{
    // int n;
    // cout<<"Enter the number of elements: ";
    // cin>>n;
    // int A[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>A[i];
    // }
    int n=10;
    int A[10]={1,2,3,4,5,6,1,2,3,4};
    string B="nitin";
    string C="tininiii";
    repeated(A,n);
    cout<<"***********************************"<<endl;
    not_repeated(A,n);
    cout<<"***********************************"<<endl;
    char_repeated(B);
    cout<<"***********************************"<<endl;
    Anagram(B,C);
    return 0;
}