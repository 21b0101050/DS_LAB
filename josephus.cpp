#include<iostream>
#include"CLinkedList.h"
using namespace std;
void Josephus(struct node **CSTART)
{
    int c=1;
    struct node *p,*q;
    p=(*CSTART)->Next;
    q=NULL;
    while(p->Next!=p)
    {
        while(c!=2)
        {
            q=p;
            c=c+1;
            p=p->Next;
        }
        p=p->Next;
        CDelAft(&q);
        c=1;
    }
    cout<<p->info;
}
int main()
{
    struct node *CSTART;
    CSTART=NULL;
    CInsEnd(&CSTART,0);
    CInsEnd(&CSTART,1);
    CInsEnd(&CSTART,2);
    CInsEnd(&CSTART,3);
    CInsEnd(&CSTART,4);
    CTraverse(CSTART);
    cout<<endl;
    Josephus(&CSTART);
}