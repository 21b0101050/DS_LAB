#include<iostream>
#include"LinkedList.h"
using namespace std;
void Initialize(struct node **TOP)
{
    (*TOP)==NULL;
}
bool IsEmpty(struct node **TOP)
{
    if((*TOP)==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void PUSH(struct node **TOP,int x)
{
    InsBeg(TOP,x);
}
int POP(struct node **TOP)
{
    if(!IsEmpty(TOP))
    {
        int x=DelBeg(TOP);
        return x;
    }
    else
    {
        cout<<"Stack Underflows";
        exit(1);
    }
}
void StackTop(struct node *TOP)
{
    cout<<(TOP)->info<<" ";
}
int main()
{
    struct node *STACK;
    Initialize(&STACK);
    PUSH(&STACK,10);
    PUSH(&STACK,20);
    PUSH(&STACK,30);
    PUSH(&STACK,40);
    StackTop(STACK);
}