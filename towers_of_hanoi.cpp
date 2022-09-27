#include<iostream>
using namespace std;
void TOH(int N,char S,char M,char D)
{
    if(N==1)
    {
        cout<<S<<"-------->"<<D<<endl;
    }
    else
    {
        TOH(N-1,S,D,M);
        cout<<S<<"-------->"<<D<<endl;
        TOH(N-1,M,S,D);
    }
}
int main()
{
    int n;
    cin>>n;
    TOH(n,'S','M','D');
}