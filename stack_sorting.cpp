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
    struct Stack s1;
    struct Stack s2;
    Initialize(&s1);
    Initialize(&s2);
    int n,x;
    cout<<"Enter no of elements: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>x;
        PUSH(&s1,x);
    }
    
    while(!IsEmpty(&s1))
    {
        int y=POP(&s1);
        while((!IsEmpty(&s2))&&(StackTop(s2)>y))
        {
            int a=POP(&s2);
            PUSH(&s1,a);
        }
        PUSH(&s2,y);
    }
    cout<<StackTop(s2);
}