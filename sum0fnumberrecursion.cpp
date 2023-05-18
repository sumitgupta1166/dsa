#include<iostream>
using namespace std;
int  sum(int n)
{
    if(n>0)
    {
        return sum(n-1)+n;
    }
    else 
    return 0;
}
int main()
{
    int n=5;
    cout<<sum(5);
    return 0;
}