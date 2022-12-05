#include<iostream>
#include"LinkedList.h"
#include"mystack1.h"
using namespace std;
void reverse_outp(struct node **START)
{
    struct node *p;
    p=(*START);
    struct Stack S;
    Initialize();
    while(p!=NULL)
    {
        PUSH(p->info);
        p=p->Next;
    }
    p=(*START);
    while (!IsEmpty())
    {
        int x=POP();
        p->info=x;
        p=p->Next;
    }
}
int main()
{
    struct node *START;
    START=NULL;
    InsEnd(&START,10);
    InsEnd(&START,20);
    InsEnd(&START,30);
    InsEnd(&START,40);
    Traverse(&START);
    cout<<endl;
    reverse_outp(&START);
    Traverse(&START);
}