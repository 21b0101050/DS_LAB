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
    int x=s.item[s.top];
    return x;
}
int main()
{
    struct Stack s;
    struct Stack s1;
    Initialize(&s);
    Initialize(&s1);
    PUSH(&s,10);
    PUSH(&s,20);
    PUSH(&s,3);
    PUSH(&s,40);
    PUSH(&s,15);
    PUSH(&s,60);
    int x,y;
    int m=StackTop(s);
    while(!IsEmpty(&s))
    {
        x=POP(&s);
        if(m>x)
        {
            m=x;    
        }
        PUSH(&s1,x);
    }
    while(!IsEmpty(&s1))
    {
        y=POP(&s1);
        PUSH(&s,y);
    }

    cout<<"Minimum element in the Stack is-> "<<m;
}