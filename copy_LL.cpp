#include<iostream>
#include"LinkedList.h"
using namespace std;
void copy(struct node **START1,struct node **START2)
{
    struct node *p;
    p=(*START1);
    while(p!=NULL)
    {
        InsEnd(START2,p->info);
        p=p->Next;
    }
}
int main()
{
    struct node *START1;
    struct node *START2;
    START1=NULL;
    START2=NULL;
    InsEnd(&START1,10);
    InsEnd(&START1,20);
    InsEnd(&START1,30);
    InsEnd(&START1,40);
    InsEnd(&START1,50);
    Traverse(&START1);
    cout<<endl;
    copy(&START1,&START2);
    Traverse(&START2);
}