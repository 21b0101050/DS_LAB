#include<iostream>
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
void Linear_Search(struct node **START,int x)
{
    int cnt=1;
    struct node *p;
    p=(*START);
    while(p!=NULL)
    {
        if(p->info==x)
        {
            cout<<x<<" is present at "<<cnt<<" node"<<endl;
            break;
        }
        p=p->Next;
        cnt++;
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
int main()
{
    int choice,x,target;
    struct node *START,*p;
    p=START;
    Initialize(&START);
    cout<<"Enter choice: "<<endl;
    cout<<"1. Add Element in Starting"<<endl;
    cout<<"2. Add Element at End"<<endl;
    cout<<"3. Searching Element"<<endl;
    cout<<"4. Traversing"<<endl;
    cout<<"5. Exit"<<endl;
    cin>>choice;
    while(choice!=5)
    {
        cout<<endl;
        if(choice==1)
        {
            cout<<"Enter element to Insert: ";
            cin>>x;
            InsBeg(&START,x);
        }
        else if(choice==2)
        {
            cout<<"Enter element to Insert: ";
            cin>>x;
            InsEnd(&START,x);
        }
        else if(choice==3)
        {
            if(count(&START)==0)
            {
                cout<<"List is Empty !! "<<endl;
            }
            else
            {
                cout<<"Enter the element to be searched: ";
                cin>>target;
                Linear_Search(&START,target);
            }
        }
        else if(choice==4)
        {
            Traverse(&START);
            cout<<endl;
        }
        cout<<"Enter choice: "<<endl;
        cout<<"1. Add Element in Starting"<<endl;
        cout<<"2. Add Element at End"<<endl;
        cout<<"3. Searching Element"<<endl;
        cout<<"4. Traversing"<<endl;
        cout<<"5. Exit"<<endl;
        cin>>choice;
    }
    cout<<"Program Run Successfully: ";

}