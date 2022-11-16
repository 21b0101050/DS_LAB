#include<iostream>
#define TRUE 1
#define FALSE 0
using namespace std;
int A[100];
int top1;
int top2;
void Initialize1()
{
    top1=-1;
}
void Initialize2()
{
    top2=100;
}
int IsEmpty1()
{
    if(top1==-1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int IsEmpty2()
{
    if(top2==100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void PUSH1(int x)
{
    if(top1+1==top2)
    {
        cout<<"Stack Overflow";
        exit(1);
    }
    else
    {
        top1++;
        A[top1]=x;
    }
}
void PUSH2(int x)
{
    if(top2-1==top1)
    {
        cout<<"Stack Overflow";
        exit(1);
    }
    else
    {
        top2--;
        A[top2]=x;
    }
}
int POP1()
{
    if(IsEmpty1())
    {
        cout<<"Stack Underflows";
        exit(1);
    }
    else
    {
        int p=A[top1];
        top1--;
        return p;
    }
}
int POP2()
{
    if(IsEmpty2())
    {
        cout<<"Stack Underflows";
        exit(1);
    }
    else
    {
        int p=A[top2];
        top2++;
        return p;
    }
}
int StackTop1()
{
    int top=A[top1];
    return top;
}
int StackTop2()
{
    int top=A[top2];
    return top;
}
int main()
{
    Initialize1();
    Initialize2();
    PUSH1(10);
    PUSH1(20);
    PUSH1(30);
    PUSH2(90);
    PUSH2(80);
    PUSH2(70);
    cout<<"Stack 1 Elements---"<<endl;
    cout<<POP1()<<endl;
    cout<<POP1()<<endl;
    cout<<POP1()<<endl;
    cout<<"Stack 2 Elements---"<<endl;
    cout<<POP2()<<endl;
    cout<<POP2()<<endl;
    cout<<POP2()<<endl;
    
}

