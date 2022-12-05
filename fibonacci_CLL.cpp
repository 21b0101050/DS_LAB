#include<iostream>
#include"CLinkedList.h"
using namespace std;
int fib(int DAT[],int i)
{
    if (i==0)
    {
        DAT[0]=0;
    }
    else
    {
        if(i==1)
        {
            DAT[1]=1;
        }
        else
        {
            if (DAT[i]==0)
            {
                DAT[i]=fib(DAT,i-1)+fib(DAT,i-2);
            }
        }
    }
    return DAT[i];
}
int max(struct node *CSTART)
{
    struct node *p;
    p=CSTART->Next;
    int max=0;
    while(p!=CSTART)
    {
        if(p->info>max)
        {
            max=p->info;
            p=p->Next;
        }
    }
    if(p->info>max)
    {
        max=p->info;
    }
    return max;
}

void fibonacci(struct node **CSTART)
{
    int max1=max(*CSTART);
    int DAT[max1+1]={0};
    int DAT1[max1+1]={0};

    for(int i=0;i<=max1;i++)
    {
        int x=fib(DAT1,i);
        if(x<max1)
        {
            DAT[x]=1;
        }
    }
    struct node *p,*q;
    q=(*CSTART);
    p=(*CSTART)->Next;
    while(p!=(*CSTART))
    {
        if(DAT[p->info]==1)
        {
            p=p->Next;
            CDelAft(&q);
        }
        else
        {
            q=p;
            p=p->Next;
        }
    }
    if(DAT[p->info]==1)
    {
        CDelAft(&q);
        (*CSTART)=q;
    }
}
int main()
{
    struct node *CSTART;
    CSTART=NULL;
    CInsEnd(&CSTART,1);
    CInsEnd(&CSTART,2);
    CInsEnd(&CSTART,3);
    CInsEnd(&CSTART,4);
    CInsEnd(&CSTART,5);
    CInsEnd(&CSTART,6);
    CInsEnd(&CSTART,7);
    CInsEnd(&CSTART,8);
    CInsEnd(&CSTART,9);
    CInsEnd(&CSTART,10);
    CInsEnd(&CSTART,11);
    CInsEnd(&CSTART,12);
    CInsEnd(&CSTART,13);
    CInsEnd(&CSTART,14);
    CInsEnd(&CSTART,15);
    cout<<"Initial Linked List: ";
    CTraverse(CSTART);
    cout<<endl;
    cout<<"Linked List after deleting fibonacci elements: ";
    fibonacci(&CSTART);
    CTraverse(CSTART);
}