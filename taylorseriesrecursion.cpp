#include<iostream>
using namespace std;
// double e(int x,int n)
// {
//     static double p=1,f=1;
//     double r;
//     if(n==0)
//     return 1;
//     else
//     r=e(x,n-1);
//     p=p*x;
//     f=f*n;
//     return r+p/f;
// }
double e(int x,int n)
{
    double s=1;
    for( ;n>0;n--)
    {
        s=1+x*s/n;
    }
    return s;
}
// double e(int x,int n)
// {
//     static double s;
//     if(n==0)
//     return s;
//     else
//     {
//         s=1+x*s/n;
//         return e(x,n-1);
//     }
// }
int main()

{
    ;
    cout<<e(1,646);
    return 0;
}