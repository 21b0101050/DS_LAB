#include<iostream>
#include"LinkedList.h"
using namespace std;
void reverse(struct node **START)
{
    struct node *c,*p,*n;
    c=(*START);
    p=NULL;
    n=c->Next;
    while(c!=NULL)
    {
        c->Next=p;
        p=c;
        c=n;
        if(n!=NULL)
        {
            n=n->Next;
        }
    }
    (*START)=p;
}
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
        sum=total%10;
        carry=total/10;
        p=p->Next;
        q=q->Next;
        InsBeg(&START3,sum);
    }
    while(p!=NULL)
    {
        total=p->info+carry;
        sum=total%10;
        carry=total/10;
        InsBeg(&START3,sum);
        p=p->Next;
    }
    while(q!=NULL)
    {
        total=q->info+carry;
        sum=total%10;
        carry=total/10;
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
    int n1,n2,rem;
    cout<<"Enter 1st Number: ";
    cin>>n1;
    cout<<"Enter 2nd Number: ";
    cin>>n2;
    while(n1!=0)
    {
        rem=n1%10;
        InsEnd(&START1,rem);
        n1=n1/10;
    }
    while(n2!=0)
    {
        rem=n2%10;
        InsEnd(&START2,rem);
        n2=n2/10;
    }
    add(&START1,&START2);
}