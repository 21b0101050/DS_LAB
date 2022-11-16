#include<iostream>
using namespace std;
struct student{
    int Roll_No;
    char name[20];
    double perc;
};
void Input(struct student *p,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%s%lf",&(p+i)->Roll_No,(p+i)->name,&(p+i)->perc);
    }
}
void Print(struct student *p,int n)
{
    int i=0;
    cout<<endl;
    for(i=0;i<n;i++)
    { 
        printf("%d %s %.2lf\n",(p+i)->Roll_No,(p+i)->name,(p+i)->perc);
    }
}
int main()
{
    int n;
    cout<<"No of Entries? : ";
    cin>>n;
    struct student *p;
    p=(struct student*)malloc(n*sizeof(struct student));
    Input(p,n);
    Print(p,n);
}
