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
int main()
{
    struct node *START;
    Initialize(&START);
    InsBeg(&START,10);
    InsBeg(&START,20);
    InsBeg(&START,30);
    InsEnd(&START,40);
    InsEnd(&START,50);
    InsEnd(&START,60);
    InsAfter(&START,11);
    Traverse(&START);
    cout<<endl;
    cout<<DelBeg(&START)<<endl;
    cout<<DelEnd(&START)<<endl;
    Traverse(&START);
    cout<<endl;
    

}


