//Not Completed....................................................
#include<iostream>
#include"LinkedList.h"
using namespace std;
void all_delete(struct node **START,int x)
{
    struct node *r;
    r=(*START);
    while(r->Next!=NULL)
    {
        if(r->info==10)
        {
            Delete(START,10);
        }
        r=r->Next;
    }
    Traverse(START);
}
int main()
{
    int x;
    struct node *START;
    struct node *r;
    START=NULL;
    r=NULL;
    InsEnd(&START,10);
    InsEnd(&START,20);
    InsEnd(&START,10);
    InsEnd(&START,40);
    InsEnd(&START,10);
    InsEnd(&START,60);
    Traverse(&START);
    cout<<endl;
    // cout<<"Enter element to Delete: ";
    cout<<endl;
    all_delete(&START,10);
}