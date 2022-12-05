// incomplete......(WORKING ONLY FOR EVEN NO OF TERMS)
#include<iostream>
#include"LinkedList.h"
using namespace std;
void swap_pair(struct node **START)
{
    struct node *p;
    struct node *q;
    int temp;
    q=(*START);
    p=(*START)->Next;
    while(p->Next!=NULL)
    {
        temp=q->info;
        q->info=p->info;
        p->info=temp;
        q=q->Next->Next;
        p=p->Next->Next;
    }
    temp=q->info;
    q->info=p->info;
    p->info=temp;
    Traverse(START);
}
int main()
{
    struct node *START;
    START=NULL;
    InsEnd(&START,10);
    InsEnd(&START,20);
    InsEnd(&START,30);
    InsEnd(&START,40);
    InsEnd(&START,50);
    InsEnd(&START,60);
    InsEnd(&START,70);
    InsEnd(&START,80);
    InsEnd(&START,90);
    InsEnd(&START,100);
    Traverse(&START);
    cout<<endl;
    swap_pair(&START);
}