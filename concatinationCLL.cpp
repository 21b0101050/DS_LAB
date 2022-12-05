#include<iostream>
#include"CLinkedList.h"
using namespace std;
void Concatinate(struct node **CSTART1,struct node **CSTART2)
{
    struct node *p,*q;
    p=(*CSTART1)->Next;
    q=(*CSTART2)->Next;
    (*CSTART1)->Next=q;
    (*CSTART2)->Next=p;
    CTraverse(*CSTART2);
}
int main()
{
    struct node *CSTART1,*CSTART2;
    CSTART1=NULL;
    CSTART2=NULL;
    CInsEnd(&CSTART1,10);
    CInsEnd(&CSTART1,20);
    CInsEnd(&CSTART1,30);
    CInsEnd(&CSTART1,40);
    CInsEnd(&CSTART2,50);
    CInsEnd(&CSTART2,60);
    CInsEnd(&CSTART2,70);
    CTraverse(CSTART1);
    cout<<endl;
    CTraverse(CSTART2);
    cout<<endl;
    Concatinate(&CSTART1,&CSTART2);
}
