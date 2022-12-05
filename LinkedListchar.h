#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    char info;
    struct node *Next;
};
struct node *GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void InsBeg(struct node **START,char x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->Next=(*START);
    (*START)=p;
}
void InsAfter(struct node **p,char x)
{
    struct node *q;
    q=GetNode();
    q->info=x;
    q->Next=(*p)->Next;
    (*p)->Next=q;
}
void InsEnd(struct node **START,char x)
{
    struct node *p,*q;
    q=(*START);
    if((*START)==NULL)
    {
        InsBeg(START,x);
    }
    else
    {
        while(q->Next!=NULL)
        {
            q=q->Next;
        }
        p=GetNode();
        p->info=x;
        p->Next=NULL;
        q->Next=p;
    }
}
int DelBeg(struct node **START)
{
    struct node *p;
    char x;
    p=(*START);
    (*START)=(*START)->Next;
    x=p->info;
    free(p);
    return x;
}
int DelAft(struct node **p)
{
    char x;
    struct node *q;
    q=(*p)->Next;
    (*p)->Next=q->Next;
    x=q->info;
    free(q);
    return x;
}
int DelEnd(struct node **START)
{
    struct node *p,*q;
    char x;
    p=(*START);
    q=NULL;
    while(p->Next!=NULL)
    {
        q=p;
        p=p->Next;
    }
    q->Next=NULL;
    x=p->info;
    free(p);
    return x;
}
int Delete(struct node **START,int x)
{
    char y;
    struct node *p,*q;
    p=(*START);
    q=(*START);
    while(p->info!=x)
    {
        q=p;
        p=p->Next;
    }
    q->Next=p->Next;
    y=p->info;
    free(p);
    return y;
}
int count(struct node **START)
{
    struct node *p;
    int cnt=0;
    p=(*START);
    while(p!=NULL)
    {
        cnt++;
        p=p->Next;
    }
    return cnt;
}
void Traverse(struct node **START)
{
    struct node *p;
    p=(*START);
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p=p->Next;
    }
}
void OrderedIns(struct node **START,int x)
{
    struct node *p,*q;
    p=(*START);
    q=NULL;
    while(p!=NULL && x>=p->info)
    {
        q=p;
        p=p->Next;
    }
    if(q==NULL)
    {
        InsBeg(START,x);
    }
    else
    {
        InsAfter(&q,x);
    }
}