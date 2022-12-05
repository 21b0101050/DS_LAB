#include<iostream>
#include"mystack2.h"
using namespace std;
int main()
{
    Initialize();
    string s,rev;
    cin>>s;
    int i=0;
    while(s[i]!='\0')
    {
        PUSH(s[i]);
        i++;
    }
    i=0;
    char x;
    while(!IsEmpty())
    {
        x=POP();
        rev=rev+x;
        i++;
    }
    cout<<rev<<endl;
    if(rev==s)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindome";
    }
}