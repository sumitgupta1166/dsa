#include<iostream>
using namespace std;
void funb(int m);
void funa(int n)
{ if(n>0)
{
    cout<<n<<"\n";
    funb(n-1);
}
}
void funb(int m)
{
    if(m>1)
    {
    cout<<m<<"\n";
    funa(m/2);
    }
}
int main()
{
    int n=20;
    funa(n);
    return 0;
}