#include<iostream>
#include<stdlib.h>
#include<math.h>
# define Stacksize 50
# define TRUE 1
# define FALSE 0
using namespace std;
struct Stack{
    char item[Stacksize];
    int top;
};
struct Stack s;
void Initialize()
{
    s.top=-1;
}
int IsEmpty()
{
    if(s.top==-1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
void PUSH(char x)
{
    if(s.top==Stacksize-1)
    {
        cout<<"Stack Overflows";
        exit(1);
    }
    s.top=s.top+1;
    s.item[s.top]=x;
}
int POP()
{
    if(IsEmpty())
    {
        cout<<"Stack Underflows";
        exit(1);
    }
    char x=s.item[s.top];
    s.top--;
    return x;
}
int StackTop()
{
    int x=s.item[s.top];
    return x;
}
int Evaluate(int a,int b,char op)
{
    switch(op)
    {
        case '+': return a+b;
        break;
        case '-': return a-b;
        break;
        case '*': return a*b;
        break;
        case '/': return a/b;
        break;
        case '^': return pow(a,b);
        break;
    }
}
int main()
{
    struct Stack s;
    int x,b=0,a=0,value,i=0;
    char Postfix[40];
    char symbol;
    Initialize();
    cin>>Postfix;
    while(Postfix[i]!='\0')
    {
        symbol=Postfix[i];
        if(symbol>='0' && symbol<='9')
        {
            PUSH(symbol-'0');
        }
        else
        {
            b=POP();
            a=POP();
            value=Evaluate(a,b,symbol);
            PUSH(value);
        }
        i++;
    }
    x=POP();
    cout<<x;    
}

