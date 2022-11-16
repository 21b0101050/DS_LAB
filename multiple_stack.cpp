#include<iostream>
#define TRUE 1
#define FALSE 0
#define N 15
#define M 3
using namespace std;
int Ti;
int A[15];
void Initialize(int i)
{
    Ti=N/M*i-1;
}
int IsEmpty(int i)
{
    
    if(Ti==N/M*i-1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void PUSH(int i,int x)
{
    if(Ti==N/M*(i+1)-1)
    {
        cout<<"Stack Overflows";
        exit(1);
    }
    else
    {
        Ti++;
        A[Ti]=x;
    }
}
int POP(int i)
{
    if(IsEmpty(i))
    {
        cout<<"Stack Underflows";
        exit(1);
    }
    else
    {
        int x=A[Ti];
        Ti--;
        return x;
    }
}
int StackTop(int i)
{
    int top=A[Ti];
    return top;
}
int main()
{
    int A[15];
    int Ti,i,choice;
    cout<<"In which stack you want to perform operation: ";
    cin>>i;
    switch (i)
    {
    case 0:
        Initialize(i);
        cout<<"1: PUSH"<<endl;
        cout<<"2: POP"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
                PUSH(i,10);
                PUSH(i,20);
                cout<<"Top element of stack" <<i << "is: "<<StackTop(i);
                break;
            case 2:
                cout<<POP(i);
            default:
                break;
        }
        break;
    case 1:
        Initialize(i);
        cout<<"1: PUSH"<<endl;
        cout<<"2: POP"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
                PUSH(i,30);
                cout<<"Top element of stack" <<i << "is: "<<StackTop(i);
                break;
            case 2:
                cout<<POP(i);
            default:
                break;
        }
        break;
    case 2:
        Initialize(i);
        cout<<"1: PUSH"<<endl;
        cout<<"2: POP"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1:
                PUSH(i,50);
                PUSH(i,60);
                cout<<"Top element of stack" <<i << "is: "<<StackTop(i);
                break;
            case 2:
                cout<<POP(i);
            default:
                break;
        }
        break;
    default:
        break;
    } 
}

