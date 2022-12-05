#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int info;
    struct node *Next;
};
struct node *START;
struct node *GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void InsBeg(int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->Next=START;
    START=p;
}
void InsEnd(int x)
{
    struct node *p,*q;
    q=START;
    while(q->Next!=NULL)
    {
        q=q->Next;
    }
    p=GetNode();
    p->info=x;
    p->Next=NULL;
    q->Next=p;
}
int count(struct node *p)
{
    int cnt=0;
    p=START;
    while(p!=NULL)
    {
        cnt++;
        p=p->Next;
    }
    return cnt;
}
void Traverse(struct node *p)
{
    p=START;
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p=p->Next;
        
    }
}
int main()
{
    START=NULL;
    InsBeg(10);
    InsBeg(20);
    InsBeg(30);
    InsEnd(40);
    InsEnd(50);
    InsEnd(60);
    Traverse(START);
    cout<<endl;
    cout<<"No. of Nodes: "<<count(START)<<endl;
}


