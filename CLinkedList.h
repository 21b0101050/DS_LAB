#include<iostream>
using namespace std;
struct node
{
    int info;
    struct node *Next;
};
struct node *GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void CInsBeg(struct node **CSTART,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    if((*CSTART)==NULL)
    {
        (*CSTART)=p;
        p->Next=p;
    }
    else
    {
        p->Next=(*CSTART)->Next;
        (*CSTART)->Next=p;
    }
}
void CInsEnd(struct node **CSTART,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    if((*CSTART)!=NULL)
    {
        p->Next=(*CSTART)->Next;
        (*CSTART)->Next=p;
        (*CSTART)=p;
    }
    else
    {
        *CSTART=p;
        (*CSTART)->Next=p;
    }
}
void CInsAft(struct node **q,int x)
{
    if((*q)==NULL)
    {
        cout<<"Insertion Forbidden"<<endl;
        exit(1);
    }
    else
    {
        struct node *p;
        p=GetNode();
        p->info=x;
        p->Next=(*q)->Next;
        (*q)->Next=p;
    }
}
int CDelBeg(struct node **CSTART)
{
    struct node *p;
    p=(*CSTART)->Next;
    (*CSTART)->Next=p->Next;
    if((*CSTART)->Next==(*CSTART))
    {
        (*CSTART)=NULL;
    }
    int x=p->info;
    free(p);
    return x;
}
int CDelEnd(struct node **CSTART)
{
    struct node *p,*q;
    q=(*CSTART);
    p=(*CSTART)->Next;
    while(p->Next!=(*CSTART))
    {
        p=p->Next;
    }
    p->Next=(*CSTART)->Next;
    (*CSTART)=p;
    int x=q->info;
    free(q);
    return x;
}
int CDelAft(struct node **q)
{
    struct node *p;
    p=(*q)->Next;
    (*q)->Next=p->Next;
    int x=p->info;
    free(p);
    return x;
}
void CTraverse(struct node *CSTART)
{
    struct node *p;
    p=CSTART->Next;
    while(p!=CSTART)
    {
        cout<<p->info<<" ";
        p=p->Next;
    }
    cout<<p->info;
}