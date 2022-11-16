#include<iostream>
#include<stdlib.h>
#include"mystack2.h"
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
void InfixToPostfix(char infix[])
{
    int i=0,p=0;
    char postfix[20];
    char symbol,x;
    Initialize();
    while(infix[i]!='\0')
    {
        symbol=infix[i];
        i++;
        if(symbol>='a'&&symbol<='z')
        {
            postfix[p]=symbol;
            p++;
        }
        else
        {
            while(!IsEmpty()&&prcd(StackTop(),symbol))
            {
                x=POP();
                postfix[p]=x;
                p++;
            }
            if(StackTop()=='('&&symbol==')')
            {
                POP();
            }
            else
            {
                PUSH(symbol);
            }
        }
    }
    while(!IsEmpty())
    {
        x=POP();
        postfix[p]=x;
        p++;
    }
    postfix[p]='\0';
    cout<<postfix;
}
int main()
{
    char infix[20];
    cin>>infix;
    InfixToPostfix(infix);
}

