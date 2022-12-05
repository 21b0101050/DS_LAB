#include<iostream>
#include"CLinkedList.h"
using namespace std;
void Pattern(struct node **CSTART)
{
    struct node *p;
    p=(*CSTART)->Next;
    int sum=0;
    while(p!=(*CSTART))
    {
        sum+=p->info;
        p=p->Next;
    }
    sum+=p->info;
    p=(*CSTART)->Next;
    while(p!=(*CSTART))
    {
        p->info=sum-p->info;
        p=p->Next;
    }
    p->info=sum-p->info; 
}
int main()
{
    struct node *CSTART;
    CSTART=NULL;
    CInsEnd(&CSTART,10);
    CInsEnd(&CSTART,20);
    CInsEnd(&CSTART,30);
    CInsEnd(&CSTART,40);
    CInsEnd(&CSTART,50);
    CTraverse(CSTART);
    cout<<endl;
    Pattern(&CSTART);
    CTraverse(CSTART);
}