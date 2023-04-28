#include<iostream>
using namespace std;
// int pow(int m,int n)
// {
//     if(n==0)
//     return 1;
//     else 
//     return pow(m,n-1)*2;
// }
int power(int m,int n)
{
    if(n==0)
    return 1;
    if(n%2==0)
    return power(m*m,n/2);
    else
    return m*power(m*m,(n-1)/2);
}
//using loop
int powl(int m,int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)
    {
        s*=m;
    }
    return s;
}
int main()
{
    int n=10,m=3;
    cout<<powl(m,n);
    return 0;
}