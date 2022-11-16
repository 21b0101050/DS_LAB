#include<iostream>
using namespace std;
struct student{
    int roll_no;
    char name[20];
    double per;
};
int main()
{
    int n;
    cout<<"No. of entries: ";
    cin>>n;
    struct student *p;
    p=(struct student*)malloc(n*sizeof(struct student));
    for(int i=0;i<n;i++)
    {
        scanf("%d%s%lf",&(p+i)->roll_no,(p+i)->name,&(p+i)->per);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n%d %s %lf",(p+i)->roll_no,(p+i)->name,(p+i)->per);
    }
}