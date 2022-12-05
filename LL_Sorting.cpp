#include<iostream>
#include"LinkedList.h"
using namespace std;
void sorting(struct node **START1)
{
    struct node *p,*START2,*q;
    q=NULL;
    START2=NULL;
    p=(*START1);
    while(p!=NULL)
    {
        OrderedIns(&START2,p->info);
        p=p->Next;
    }
    Traverse(&START2);
}
int main()
{
    int choice,x;
    struct node *START;
    START=NULL;
    cout<<"Enter Choice: "<<endl;
    cout<<"1. Enter Element "<<endl;    
    cout<<"2. Exit "<<endl;
    cin>>choice;
    while(choice!=2)
    {
        if(choice==1)
        {
            cout<<"Enter the element: ";
            cin>>x;
            InsBeg(&START,x);
            cout<<"Sorted List: ";
            sorting(&START);
        }
        else
        {
            cout<<"Wrong Input !";
        }
        cout<<endl;
        cout<<"Enter Choice: "<<endl;
        cout<<"1. Enter Element "<<endl;    
        cout<<"2. Exit "<<endl;
        cin>>choice;
    }
    cout<<"Program Run Successfully! ";
}