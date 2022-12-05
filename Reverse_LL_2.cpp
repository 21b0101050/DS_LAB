#include<iostream>
#include"LinkedList.h"
using namespace std;
void reverse(struct node **START)
{
    struct node *c,*p,*n;
    c=(*START);
    p=NULL;
    n=c->Next;
    while(c!=NULL)
    {
        c->Next=p;
        p=c;
        c=n;
        if(n!=NULL)
        {
            n=n->Next;
        }
    }
    (*START)=p;
}
int main()
{
    struct node *START;
    START=NULL;
    InsEnd(&START,10);
    InsEnd(&START,20);
    InsEnd(&START,30);
    InsEnd(&START,40);
    cout<<endl;
    reverse(&START);
    Traverse(&START);
}