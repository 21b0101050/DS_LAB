#include<iostream>
#include"LinkedList.h"
using namespace std;
int main()
{
    int x;
    struct node *START;
    START=NULL;
    InsEnd(&START,10);
    InsEnd(&START,20);
    InsEnd(&START,30);
    InsEnd(&START,40);
    InsEnd(&START,50);
    InsEnd(&START,60);
    Traverse(&START);
    cout<<endl;
    cout<<"Enter element to Delete: ";
    cin>>x;
    cout<<Delete(&START,x)<<" is deleted !";
    cout<<endl;
    Traverse(&START);
}