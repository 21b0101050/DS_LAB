#include<iostream>
#include"LinkedList.h"
using namespace std;
void del_all(struct node **START,int x)
{
    struct node *p,*q;
    p=(*START);
    q=NULL;
    while(p!=NULL)
    {
        if(p->info==x)
        {
            if(q==NULL)
            {
                p=p->Next;
                DelBeg(START);
            }
            else
            {
                p=p->Next;
                DelAft(&q);
            }
        }
        else
        {
            q=p;
            p=p->Next;
        }
    } 
}
int main()
{
    struct node *START;
    START=NULL;
    InsEnd(&START,10);
    InsEnd(&START,20);
    InsEnd(&START,10);
    InsEnd(&START,30);
    InsEnd(&START,10);
    InsEnd(&START,40);
    InsEnd(&START,10);
    Traverse(&START);
    del_all(&START,10);
    cout<<endl;
    Traverse(&START);
}