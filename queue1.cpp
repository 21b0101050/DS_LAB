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
    Q->rear=-1;
    Q->front=0;
}
int IsEmpty(struct Queue *Q)
{
    if((Q->rear-Q->front+1)==0)
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
    if(Q->rear==queuesize-1)
    {
        cout<<"Queue Overflows";
        exit(1);
    }
    Q->rear++;
    Q->item[Q->rear]=x;
}
int DeQueue(struct Queue *Q)
{
    if(IsEmpty(Q))
    {
        cout<<"Queue Underflows";
        exit(1);
    }
    int x=Q->item[Q->front];
    Q->front++;
    return x;
}
int main()
{
    struct Queue Q;
    int x,choice;
    Initialize(&Q);
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
            EnQueue(&Q,x);
            cout<<"Element Added Successfully"<<endl;
        } 
        if(choice==2)
        {
            cout<<"Deleted element is: "<<DeQueue(&Q)<<endl;
        }   
        cout<<"Choose the following: "<<endl;
        cout<<"1. EnQueue"<<endl;
        cout<<"2. DeQueue"<<endl;
        cout<<"3.Exit"<<endl;
        cin>>choice;
    }
    cout<<"!! Program run successfully   !!"<<endl;
}  
  