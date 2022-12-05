#include<iostream>
#include<string.h>
using namespace std;
struct students
{
    int roll_no;
    string name;
    double chem_marks;
    double maths_marks;
    double phy_marks;
    double per;
};
int main()
{
    struct students S[5];
    cout<<"enter the details:"<<endl; 
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Roll_no: ";
        cin>>S[i].roll_no;
        cout<<"Enter Name: ";
        cin>>S[i].name;
        cout<<"Enter Chemistry Marks: ";
        cin>>S[i].chem_marks;
        cout<<"Enter maths marks: ";
        cin>>S[i].maths_marks;
        cout<<"Enter physics marks: ";
        cin>>S[i].phy_marks;
    }
    for(int i=0;i<5;i++)
    {
        S[i].per=(S[i].chem_marks+S[i].maths_marks+S[i].phy_marks)/3;
    }
    for(int i=0;i<5;i++)
    {   
        cout<<"Roll_No- "<<S[i].roll_no;
        cout<<" Percentage: "<<S[i].per<<endl;;
    }

}