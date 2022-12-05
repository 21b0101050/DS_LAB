#include<iostream>
#include<stdlib.h>
#include"LinkedList.h"
using namespace std;
void Del_Node(struct node **START,int k)
{
    struct node *p,*q;
    p=(*START);
    int i=1;
    while(i<=k)
    {
        i=i+1;
        if(p!=NULL)
        {
            p=p->Next;
        }
        else
        {
            cout<<"Void Deletion";
            exit(1);
        }
    }
    q=(*START);
    if(p!=NULL)
    {
        while(p->Next!=NULL)
        {
            q=q->Next;
            p=p->Next;
        }
        DelAft(&q);
    }
    else
    {
        DelBeg(START);
    }
}
int main()
{
    struct node *START;
    START=NULL;
    int x;
    InsEnd(&START,10);
    InsEnd(&START,20);
    InsEnd(&START,30);
    InsEnd(&START,40);
    InsEnd(&START,50);
    InsEnd(&START,60);
    Traverse(&START);
    cout<<endl<<"Which node to delete from last: ";
    cin>>x;
    Del_Node(&START,x);
    cout<<"After Deletion: "<<endl;
    Traverse(&START);
}