#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    int roll_no;
    string name;
    int age;
    string add;
};
int main()
{
    struct student s[5];
    cout<<"Enter details: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Roll_No: ";
        cin>>s[i].roll_no;
        cout<<"Name: ";
        cin>>s[i].name;
        cout<<"Age: ";
        cin>>s[i].age;
        cout<<"Address: ";
        cin>>s[i].add;
    }
    for(int i=0;i<5;i++)
    {
        if(s[i].roll_no%2==0)
        {
            cout<<s[i].name<<endl;
        }
    }
}