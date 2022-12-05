#include<iostream>
#include"LinkedList.h"
using namespace std;
void Split(struct node **START1,int x)
{
    struct node *START2;
    struct node *p;
    struct node *q;
    p=(*START1);
    q=(*START1);
    START2=NULL;
    while(p->info!=x)
    {
        q=p;
        p=p->Next;
    }
    q->Next=NULL;
    START2=p;
    cout<<"First Part: ";
    Traverse(START1);
    cout<<endl;
    cout<<"Second Par: ";
    Traverse(&START2);
}
int main()
{
    int spl;
    struct node *START1;
    START1=NULL;
    InsEnd(&START1,10);
    InsEnd(&START1,20);
    InsEnd(&START1,30);
    InsEnd(&START1,40);
    InsEnd(&START1,50);
    InsEnd(&START1,60);
    InsEnd(&START1,70);
    InsEnd(&START1,80);
    InsEnd(&START1,90);
    InsEnd(&START1,100);
    Traverse(&START1);
    cout<<endl;
    cout<<"Enter element from where you want to split the list:"<<endl;
    cin>>spl;
    Split(&START1,spl);
}