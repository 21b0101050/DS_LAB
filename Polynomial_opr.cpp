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
    while(p!=NULL)
    {
        InsEnd(&Poly3,p->coef,p->exp);
        p=p->Next;
    }
    while(q!=NULL)
    {
        InsEnd(&Poly3,q->coef,q->exp);
        q=q->Next;
    }
    cout<<"Addition is: ";
    Traverse(&Poly3);
}
void polynomialSub(struct node **Poly1,struct node ** Poly2)
{
    struct node *p,*q;
    struct node *Poly3;
    p=(*Poly1);
    q=(*Poly2);
    Poly3=NULL;
    while(q!=NULL)
    {
        q->coef=-1*q->coef;
        q=q->Next;
    }
    q=(*Poly2);
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
    while(p!=NULL)
    {
        InsEnd(&Poly3,p->coef,p->exp);
        p=p->Next;
    }
    while(q!=NULL)
    {
        InsEnd(&Poly3,q->coef,q->exp);
        q=q->Next;
    }
    cout<<"Subtraction is: ";
    Traverse(&Poly3);
}
void PolynomialMul(struct node **Poly1,struct node **Poly2)
{
    struct node *Poly3,*p,*q;
    p=(*Poly1);
    q=(*Poly2);
    Poly3=NULL;
    while(q!=NULL)
    {
        while(p!=NULL)
        {
            OrderedIns(&Poly3,p->coef*q->coef,p->exp+q->exp);
            p=p->Next;
        }
        q=q->Next;
        p=(*Poly1);
    }
    p=Poly3;
    while(p->Next!=NULL)
    {
        if(p->exp==p->Next->exp)
        {
            p->coef=p->coef+p->Next->coef;
            DelAft(&p);
        }
        else
        {
            p=p->Next;
        }
    }
    cout<<"Multiplication is: ";
    Traverse(&Poly3);
}
int main()
{
    struct node *Poly1,*Poly2;
    Poly1=NULL;
    Poly2=NULL;
    OrderedIns(&Poly1,2,1);
    OrderedIns(&Poly1,3,2);
    OrderedIns(&Poly2,2,1);
    Traverse(&Poly1);
    cout<<endl;
    Traverse(&Poly2);
    cout<<endl;
    polynomialAdd(&Poly1,&Poly2);
    cout<<endl;
    polynomialSub(&Poly1,&Poly2);
    cout<<endl;
    PolynomialMul(&Poly1,&Poly2);
}