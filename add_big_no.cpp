#include<iostream>
#include"LinkedList.h"
using namespace std;
int add(struct node **START1,struct node **START2)
{
    int total,sum,carry=0;
    struct node *START3;

    struct node *p,*q;
    p=(*START1);
    q=(*START2);
    while(p!=NULL && q!=NULL)
    {
        total=p->info+q->info+carry;
        sum=total%10000;
        carry=total/10000;
        p=p->Next;
        q=q->Next;
        InsBeg(&START3,sum);
    }
    while(p!=NULL)
    {
        total=p->info+carry;
        sum=total%10000;
        carry=total/10000;
        InsBeg(&START3,sum);
        p=p->Next;
    }
    while(q!=NULL)
    {
        total=q->info+carry;
        sum=total%10000;
        carry=total/10000;
        InsBeg(&START3,sum);
        q=q->Next;
    }
    if(carry>0)
    {
        InsBeg(&START3,carry);
    }
    cout<<"Sum is: ";
    Traverse(&START3);
}
int main()
{
    struct node *START1,*START2;
    START1=NULL;
    START2=NULL;
    InsEnd(&START1,1247);
    InsEnd(&START1,5644);
    InsEnd(&START1,9158);
    InsEnd(&START2,2344);
    InsEnd(&START2,5811);
    InsEnd(&START2,9144);
    Traverse(&START1);
    cout<<endl;
    Traverse(&START2);
    cout<<endl;
    add(&START1,&START2);
}