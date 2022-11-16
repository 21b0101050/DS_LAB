#include<iostream>
#include<stdlib.h>
# define Stacksize 10
# define TRUE 1
# define FALSE 0
using namespace std;
struct Stack{
    int item[Stacksize];
    int top;
};
void Initialize(struct Stack *s)
{
    s->top=-1;
}
int IsEmpty(struct Stack *s)
{
    if(s->top==-1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void PUSH(struct Stack *s,int x)
{
    if(s->top==Stacksize-1)
    {
        cout<<"Stack Overflows";
        exit(1);
    }
    s->top=s->top+1;
    s->item[s->top]=x;
}
int POP(struct Stack *s)
{
    if(IsEmpty(s))
    {
        cout<<"Stack Underflows";
        exit(1);
    }
    int x=s->item[s->top];
    s->top--;
    return x;
}
int StackTop(struct Stack s)
{
    if(s.top==-1)
    {
        return -1;
    }
    int x=s.item[s.top];
    return x;
}
int main()
{
    int x,choice;
    struct Stack s1;
    Initialize(&s1);
    cout<<"Choose the following: "<<endl;
    cout<<"1. PUSH"<<endl;
    cout<<"2. POP"<<endl;
    cout<<"3. Top Element"<<endl;
    cout<<"4. Exit"<<endl;
    cin>>choice;
    while(choice!=4)
    {
        if(choice==1)
        {
            cout<<"Enter element to PUSH"<<endl;
            cin>>x;
            PUSH(&s1,x);
            cout<<"Element Added Successfully"<<endl;
        } 
        if(choice==2)
        {
            cout<<"Deleted element is: "<<POP(&s1)<<endl;
        }   
        if(choice==3)
        {
            cout<<"Top element is: "<<StackTop(s1)<<endl;
        }   
        cout<<"Choose the following: "<<endl;
        cout<<"1. PUSH"<<endl;
        cout<<"2. POP"<<endl;
        cout<<"3. Top Element"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>choice;
    }
    cout<<"!! Program run successfully   !!"<<endl;
}

