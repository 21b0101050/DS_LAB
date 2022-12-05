#include<iostream>
#include"LinkedList.h"
using namespace std;

void Initialize(struct node **Rear,struct node **Front)
{
    (*Rear)=NULL;
    (*Front)=NULL;
}
void Enqueue(struct node **Rear,struct node **Front,int x)
{
    if(*Rear==NULL)
    {
        InsBeg(Rear,x);
        *Front=*Rear;
    }
    else
    {
        InsAfter(Rear,x);
        (*Rear)=(*Rear)->Next;
    }    
}
int Dequeue(struct node **Rear,struct node **Front)
{
    int x;
    if(*Front==NULL)
    {
        cout<<"Queue Underflows";
        exit(1);
    }
    else
    {
        x=DelBeg(Front);
        if(*Front==NULL)
        {
            *Rear=NULL;
        }
        return x;
    }    
}
void Top(struct node *Rear, struct node *Front)
{
    cout<<(Front->info);
}
int main()
{
    struct node *Rear,*Front;
    Initialize(&Rear,&Front);
    Enqueue(&Rear,&Front,10);
    Enqueue(&Rear,&Front,20);
    Enqueue(&Rear,&Front,30);
    Enqueue(&Rear,&Front,40);
    Traverse(&Front);
    cout<<endl<<"Deleted item is: "<<Dequeue(&Rear,&Front);
}
