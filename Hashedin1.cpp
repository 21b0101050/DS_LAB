#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int info;
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
void InsBeg(struct node **START,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->Next=(*START);
    (*START)=p;
}
void InsAfter(struct node **p,int x)
{
    struct node *q;
    q=GetNode();
    q->info=x;
    q->Next=(*p)->Next;
    (*p)->Next=q;
}
void InsEnd(struct node **START,int x)
{
    struct node *p,*q;
    q=(*START);
    while(q->Next!=NULL)
    {
        q=q->Next;
    }
    p=GetNode();
    p->info=x;
    p->Next=NULL;
    q->Next=p;
}
int DelBeg(struct node **START)
{
    struct node *p;
    int x;
    p=(*START);
    (*START)=(*START)->Next;
    x=p->info;
    free(p);
    return x;
}
int DelAft(struct node **p)
{
    int x;
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
    int x;
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
bool CycleDetection(struct node **START)
{
    struct node *r,*t;
    t=(*START);
    r=(*START);
    while(r!=NULL && r->Next!=NULL)
    {
        t=t->Next;
        r=r->Next->Next;
        if(t==r)
        {
            return true;
        }
    }
    return false;
}
int Count_cycle(struct node **START)
{
    if(CycleDetection(START)!=0)
    {
        struct node *t,*r;
        t=(*START);
        r=(*START);
        while(r!=NULL && r->Next!=NULL)
        {
            t=t->Next;
            r=r->Next->Next;
            if(t==r)
            {
                break;
            }
        }
        int cnt=0;
        do
        {
            cnt++;
            t=t->Next;
        } while (t!=r);
        return cnt; 
    }
    else
    {
        return -1;
    }   
}
int Cycle_Starting(struct node **START)
{
    if(CycleDetection(START)!=0)
    {
        struct node *t,*r;
        t=(*START);
        r=(*START);
        while(r!=NULL && r->Next!=NULL)
        {
            t=t->Next;
            r=r->Next->Next;
            if(t==r)
            {
                break;
            }
        }
        t=(*START);
        while(t!=r)
        {
            t=t->Next;
            r=r->Next;
        }
        return t->info;
    }
    else
    {
        return -1;
    }   
}
int middle_node(struct node **START)
{
    struct node *t,*r;
    t=(*START);
    r=(*START)->Next;
    while(r!=NULL && r->Next!=NULL)
    {
        t=t->Next;
        r=r->Next->Next;
    }
    return t->info;
}
int main()
{
    struct node *START,*p,*q;
    Initialize(&START);
    InsBeg(&START,100);
    InsEnd(&START,200);
    InsEnd(&START,300);
    InsEnd(&START,400);
    InsEnd(&START,500);
    InsEnd(&START,600);
    InsEnd(&START,700);
    cout<<endl;
    p=START;
    q=START;
    while(p->Next!=NULL)
    {
        p=p->Next;
    }
    while(q->info!=200)
    {
        q=q->Next;
    }
    // p->Next=q;
    cout<<CycleDetection(&START)<<endl;
    cout<<"No. of Nodes in Cycle: "<<Count_cycle(&START)<<endl;
    cout<<"Starting of cycle is from: "<<Cycle_Starting(&START)<<endl;
    cout<<"Middle Node info is: "<<middle_node(&START)<<endl;
}


