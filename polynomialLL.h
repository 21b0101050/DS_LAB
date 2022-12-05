#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int coef;
    int exp;
    struct node *Next;
};
void Initialize(struct node **START)
{
    (*START)=NULL;
}
struct node *GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void InsBeg(struct node **START,int coef,int exp)
{
    struct node *p;
    p=GetNode();
    p->coef=coef;
    p->exp=exp;
    p->Next=(*START);
    (*START)=p;
}
void InsAfter(struct node **p,int coef,int exp)
{
    struct node *q;
    q=GetNode();
    q->coef=coef;
    q->exp=exp;
    q->Next=(*p)->Next;
    (*p)->Next=q;
}
void InsEnd(struct node **START,int coef,int exp)
{
    struct node *p,*q;
    q=(*START);
    if((*START)==NULL)
    {
        InsBeg(START,coef,exp);
    }
    else
    {
        while(q->Next!=NULL)
        {
            q=q->Next;
        }
        p=GetNode();
        q->Next=p;
        p->coef=coef;
        p->exp=exp;
        p->Next=NULL;
    }
}
int DelBeg(struct node **START)
{
    struct node *p;
    int x;
    p=(*START);
    (*START)=(*START)->Next;
    x=p->coef;
    free(p);
    return x;
}
int DelAft(struct node **p)
{
    int x;
    struct node *q;
    q=(*p)->Next;
    (*p)->Next=q->Next;
    x=q->coef;
    free(q);
    return x;
}
int DelEnd(struct node **START)
{
    struct node *p,*q;
    int x;
    p=(*START);
    q=NULL;
    while(p->Next!=NULL)
    {
        q=p;
        p=p->Next;
    }
    q->Next=NULL;
    x=p->coef;
    free(p);
    return x;
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
        cout<<p->coef<<"x^"<<p->exp<<" ";
        p=p->Next;
    }
}
void OrderedIns(struct node **START,int coef,int exp)
{
    struct node *p,*q;
    p=(*START);
    q=NULL;
    while(p!=NULL && exp<=p->exp)
    {
        q=p;
        p=p->Next;
    }
    if(q==NULL)
    {
        InsBeg(START,coef,exp);
    }
    else
    {
        InsAfter(&q,coef,exp);
    }
}