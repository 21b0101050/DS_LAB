#include<iostream>
#include<stdlib.h>
#include"mystack2.h"
#include<string.h>
# define TRUE 1
# define FALSE 0
using namespace std;
bool prcd(char a,char b)
{
    if(a=='('||b=='(')
    {
        return false;
    }
    else 
    {
        if(b==')')
        {
            return true;
        }
        else
        {
            if(a=='^' || a=='*' || a=='/'||a=='%')
            {
                if(b=='^')
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
            else
            {
                if(b=='+'||b=='-')
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
}
void InfixToPrefix(char infix[])
{
    int i=0,p=0;
    char prefix[20];
    char symbol,x;
    Initialize();
    while(infix[i]!='\0')
    {
        symbol=infix[i];
        i++;
        if(symbol>='a'&&symbol<='z')
        {
            prefix[p]=symbol;
            p++;
        }
        else
        {
            while(!IsEmpty()&&!prcd(symbol,StackTop()))
            {
                if(StackTop()==')'&&symbol=='(')
                {
                    POP();
                }
                else
                {    
                    
                    x=POP();
                    prefix[p]=x;
                    p++;
                }   
            }
            PUSH(symbol);
        }
    }
    while(!IsEmpty())
    {
        x=POP();
        prefix[p]=x;
        p++;
    }
    prefix[p]='\0';
    cout<<strrev(prefix);
}
int main()
{
    char name[20];
    cin>>name;
    InfixToPrefix(strrev(name));
}