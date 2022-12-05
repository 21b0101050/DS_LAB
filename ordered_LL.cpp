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
    if(*START==NULL)
    {
        cout<<"Void Deletion";
        exit(1);
    }
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
    if(*p==NULL || (*p)->Next==NULL)
    {
        cout<<"Void Deletion";
        exit(1);
    }
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
    if(*START==NULL)
    {
        cout<<"Void Deletion";
        exit(1);
    }
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
int main()
{
    struct node *START,*p;
    int choice,x;
    Initialize(&START);
    cout<<"Enter your choice: "<<endl;
    cout<<"1. Insertion"<<endl;
    cout<<"2. Display"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>choice;
    while(choice!=3)
    {
        if(choice==1)
        {
            cout<<"Enter element to enter: ";
            cin>>x;
            OrderedIns(&START,x);
        }
        else if(choice==2)
        {
            cout<<"Ascending Order Linked List: ";
            Traverse(&START);
            cout<<endl;
        }
        cout<<"Enter your choice: "<<endl;
        cout<<"1. Insertion"<<endl;
        cout<<"2. Display"<<endl;
        cout<<"3. Exit"<<endl;
        cin>>choice;
    }
    cout<<"Program Run Successfully! ";


    

}


