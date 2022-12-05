#include<iostream>
#include"LinkedList.h"
void OrderedIns(struct node **START,int x)
{
    struct node *p,*q;
    p=(*START);
    q=NULL;
    while(p!=NULL && x>=p->info)
    {
        q=p;
        p=p->Next;
    }
    if(q==NULL)
    {
        InsBeg(START,x);
    }
    else
    {
        InsAfter(&q,x);
    }
}
void Merge(struct node *START1,struct node *START2)
{
    struct node *START3;
    struct node *p,*q;
    p=(START1);
    q=(START2);
    START3=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
            InsEnd(&START3,p->info);
            p=p->Next;
        }
        else
        {
            InsEnd(&START3,q->info);
            q=q->Next;
        }
    }
    while(p!=NULL)
    {
        InsEnd(&START3,p->info);
        p=p->Next;
    }
    while(q!=NULL)
    {
        InsEnd(&START3,p->info);
        p=p->Next;
    }
    Traverse(&START3);
}
void Union(struct node *START1,struct node *START2)
{
    struct node *START3;
    struct node *p,*q;
    p=(START1);
    q=(START2);
    START3=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
            InsEnd(&START3,p->info);
            p=p->Next;
        }
        else
        {
            if(p->info>q->info)
            {
                InsEnd(&START3,q->info);
                q=q->Next;
            }
            else
            {
                InsEnd(&START3,p->info);
                p=p->Next;
                q=q->Next;
            }
        }
    }
    while(p!=NULL)
    {
        InsEnd(&START3,p->info);
        p=p->Next;
    }
    while(q!=NULL)
    {
        InsEnd(&START3,p->info);
        p=p->Next;
    }
    Traverse(&START3);
}
void Intersection(struct node *START1,struct node *START2)
{
    struct node *START3;
    struct node *p,*q;
    p=(START1);
    q=(START2);
    START3=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
            p=p->Next;
        }
        else
        {
            if(p->info>q->info)
            {
                q=q->Next;
            }
            else
            {
                InsEnd(&START3,p->info);
                p=p->Next;
                q=q->Next;
            }
        }
    }
    Traverse(&START3);
}
void Difference1(struct node *START1,struct node *START2)
{
    struct node *START3;
    struct node *p,*q;
    p=(START1);
    q=(START2);
    START3=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
            InsEnd(&START3,p->info);
            p=p->Next;
        }
        else
        {
            if(p->info>q->info)
            {
                q=q->Next;
            }
            else
            {
                p=p->Next;
                q=q->Next;
            }
        }
    }
    while(p!=NULL)
    {
        InsEnd(&START3,p->info);
        p=p->Next;
    }
    Traverse(&START3);
}
void Difference2(struct node *START1,struct node *START2)
{
    struct node *START3;
    struct node *p,*q;
    p=(START1);
    q=(START2);
    START3=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
            p=p->Next;
        }
        else
        {
            if(p->info>q->info)
            {
                InsEnd(&START3,q->info);
                q=q->Next;
            }
            else
            {
                p=p->Next;
                q=q->Next;
            }
        }
    }
    while(q!=NULL)
    {
        InsEnd(&START3,p->info);
        p=p->Next;
    }
    Traverse(&START3);
}
void Sym_Difference(struct node *START1,struct node *START2)
{
    struct node *START3;
    struct node *p,*q;
    p=(START1);
    q=(START2);
    START3=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->info<q->info)
        {
            InsEnd(&START3,p->info);
            p=p->Next;
        }
        else
        {
            if(p->info>q->info)
            {
                InsEnd(&START3,q->info);
                q=q->Next;
            }
            else
            {
                p=p->Next;
                q=q->Next;
            }
        }
    }
    while(p!=NULL)
    {
        InsEnd(&START3,p->info);
        p=p->Next;
    }
    while(q!=NULL)
    {
        InsEnd(&START3,p->info);
        p=p->Next;
    }
    Traverse(&START3);
}
int main()
{
    int i,choice;
    struct node *START1,*START2,*START3;
    START1=NULL;
    START2=NULL;
    START3=NULL;
    int A[5]={10,5,2,15,17};
    int B[7]={12,5,3,6,2,8,11};
    for(i=0;i<=4;i++)
    {
        OrderedIns(&START1,A[i]);
    }
    for(i=0;i<=6;i++)
    {
        OrderedIns(&START2,B[i]);
    }
    cout<<"Set A: ";
    Traverse(&START1);
    cout<<endl;
    cout<<"Set B: ";
    Traverse(&START2);
    cout<<endl;
    cout<<"Enter Choice: "<<endl;
    cout<<"1. Merge the Sets "<<endl;
    cout<<"2. Union of Sets "<<endl;
    cout<<"3. Intersection "<<endl;
    cout<<"4. Difference (A-B) "<<endl;
    cout<<"5. Difference (B-A) "<<endl;
    cout<<"6. Symmetric Difference "<<endl;
    cout<<"7. Exit "<<endl;
    cin>>choice;
    while(choice!=7)
    {
        if(choice==1)
        {
            Merge(START1,START2);
            cout<<endl;
        }
        else if(choice==2)
        {
            Union(START1,START2);
            cout<<endl;
        }
        else if(choice==3)
        {
            Intersection(START1,START2);
            cout<<endl;
        }
        else if(choice==4)
        {
            Difference1(START1,START2);
            cout<<endl;
        }
        else if(choice==5)
        {
            Difference2(START1,START2);
            cout<<endl;
        }
        else if(choice==6)
        {
            Sym_Difference(START1,START2);
            cout<<endl;
        }
        else
        {
            cout<<"Enter Correct Choice ";
        }
        cout<<"Enter Choice: "<<endl;
        cout<<"1. Merge the Sets "<<endl;
        cout<<"2. Union of Sets "<<endl;
        cout<<"3. Intersection "<<endl;
        cout<<"4. Difference (A-B) "<<endl;
        cout<<"5. Difference (B-A) "<<endl;
        cout<<"6. Symmetric Difference "<<endl;
        cout<<"7. Exit "<<endl;
        cin>>choice;
    }
}
