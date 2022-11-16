#include<iostream>
using namespace std;
#define queuesize 10
#define TRUE 1
#define FALSE 0
struct Queue{
    int rear;
    int front;
    int item[queuesize];
};
void Initialize(struct Queue *Q)
{
    Q->rear=queuesize-1;
    Q->front=queuesize-1;
}
int IsEmpty(struct Queue *Q)
{
    if(Q->rear==Q->front)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void EnQueue(struct Queue *Q,int x)
{
    if((Q->rear+1)%queuesize==Q->front)
    {
        cout<<"Queue Overflows";
        exit(1);
    }
    Q->rear=(Q->rear+1)%queuesize;
    Q->item[Q->rear]=x;
}
int DeQueue(struct Queue *Q)
{
    if(IsEmpty(Q))
    {
        cout<<"Queue Underflows";
        exit(1);
    }
    Q->front=(Q->front+1)%queuesize;
    int x=Q->item[Q->front];
    return x;
}
int main()
{
    struct Queue CQ;
    int x,choice;
    Initialize(&CQ);
    cout<<"Choose the following: "<<endl;
    cout<<"1. EnQueue"<<endl;
    cout<<"2. DeQueue"<<endl;
    cout<<"3.Exit"<<endl;
    cin>>choice;
    while(choice!=3)
    {
        if(choice==1)
        {
            cout<<"Enter element to Enqueue"<<endl;
            cin>>x;
            EnQueue(&CQ,x);
            cout<<"Element Added Successfully"<<endl;
        }
        if(choice==2)
        {
            cout<<"Deleted element is: "<<DeQueue(&CQ)<<endl;
        }   
        cout<<"Choose the following: "<<endl;
        cout<<"1. EnQueue"<<endl;
        cout<<"2. DeQueue"<<endl;
        cout<<"3.Exit"<<endl;
        cin>>choice;
    }
    cout<<"!! Program run successfully   !!"<<endl;
}  
  