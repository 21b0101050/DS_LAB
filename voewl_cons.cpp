#include<iostream>
#include"LinkedListchar.h"
using namespace std;
void vowel(struct node **START)
{
    struct node *p,*q,*r;
    int x;
    p=NULL;
    r=NULL;
    q=(*START);
    while(q!=NULL)
    {
        if(q->info=='a'||q->info=='e'||q->info=='i'||q->info=='o'||q->info=='u')
        {
            q=q->Next;
            if(p==NULL)
            {
                if(r!=NULL)
                {
                    x=DelAft(&r);
                }
                else
                {
                    x=DelBeg(START);
                }
                InsBeg(START,x);
                p=(*START);
                r=p;
            }
            else
            {
                x=DelAft(&r);
                InsAfter(&p,x);
                p=p->Next;
            }
        }
        else
        {
            r=q;
            q=q->Next;
        }
    }
}
int main()
{
    struct node *START;
    START=NULL;
    InsEnd(&START,'a');
    InsEnd(&START,'b');
    InsEnd(&START,'c');
    InsEnd(&START,'d');
    InsEnd(&START,'e');
    InsEnd(&START,'f');
    Traverse(&START);
    vowel(&START);
    cout<<endl;
    Traverse(&START);

}