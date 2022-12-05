#include<iostream>
#include<stdlib.h>
#include"LinkedList.h"
using namespace std;
void count_odd(struct node **START)
{
    int cnt=0;
    struct node *p;
    p=(*START);
    while(p!=NULL)
    {
        if(p->info%2!=0)
        {
            cnt++;
        }
        p=p->Next;
    }
    cout<<"Odd nodes: "<<cnt<<endl;
}
void count_even(struct node **START)
{
    int cnt=0;
    struct node *p;
    p=(*START);
    while(p!=NULL)
    {
        if(p->info%2==0)
        {
            cnt++;
        }
        p=p->Next;
    }
    cout<<"Even nodes: "<<cnt<<endl;
}
int main()
{
    struct node *START;
    Initialize(&START);
    InsBeg(&START,10);
    InsBeg(&START,20);
    InsBeg(&START,30);
    InsEnd(&START,40);
    InsEnd(&START,50);
    InsEnd(&START,60);
    InsAfter(&START,11);
    Traverse(&START);
    cout<<endl;
    count_even(&START);
    count_odd(&START);

}