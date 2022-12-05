#include<iostream>
#include"polynomialLL.h"
using namespace std;
void polynomialAdd(struct node **Poly1,struct node ** Poly2)
{
    struct node *p,*q;
    struct node *Poly3;
    p=(*Poly1);
    q=(*Poly2);
    Poly3=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->exp==q->exp)
        {
            InsEnd(&Poly3,p->coef+q->coef,p->exp);
            p=p->Next;
            q=q->Next;
        }
        else
        {
            if(p->exp>q->exp)
            {
                InsEnd(&Poly3,p->coef,p->exp);
                p=p->Next;
            }
            else
            {
                InsEnd(&Poly3,q->coef,q->exp);
                q=q->Next;
            }
        }
    }
    while(p!=NULL);
    {
        InsEnd(&Poly3,p->coef,p->exp);
        p=p->Next;
    }
    while(q!=NULL);
    {
        InsEnd(&Poly3,q->coef,q->exp);
        q=q->Next;
    }
    Traverse(&Poly3);
}
int main()
{
    struct node *Poly1,*Poly2;
    Poly1=NULL;
    Poly2=NULL;
    OrderedIns(&Poly1,2,1);
    OrderedIns(&Poly1,3,2);
    OrderedIns(&Poly1,4,3);
    OrderedIns(&Poly1,5,4);
    OrderedIns(&Poly1,6,5);
    OrderedIns(&Poly2,2,1);
    OrderedIns(&Poly2,3,2);
    OrderedIns(&Poly2,4,3);
    OrderedIns(&Poly2,5,4);
    OrderedIns(&Poly2,6,5);
    Traverse(&Poly1);
    cout<<endl;
    Traverse(&Poly2);
    cout<<endl;
    polynomialAdd(&Poly1,&Poly2);
}