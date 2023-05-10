#include<iostream>
using namespace std;
int fun(int a)
{   
    if(a>0)
    {
    cout<<a;
    int b=3;
    return fun(a-1);
    }
}
int main()
{ 
    int x=3;
    cout<<sizeof(fun(x));
    return 0;
}