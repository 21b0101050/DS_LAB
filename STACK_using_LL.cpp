#include<iostream>
#include<stdlib.h>
#include"LinkedList.h"
using namespace std;
void Initialize(struct node **TOP)
{
    (*TOP)==NULL;
}
bool IsEmpty(struct node **TOP)
{
    if((TOP)==NULL)
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
    if(IsEmpty(TOP))
    {
        return -1;
    }
    int x=DelBeg(TOP);
    return x;
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
    cout<<"Top Element is: ";
    StackTop(STACK);
    cout<<endl;
    cout<<"Deleted item is: "<<POP(&STACK);
    cout<<endl;
    cout<<"Top Element is: ";
    StackTop(STACK);
}