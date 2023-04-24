#include<iostream>
using namespace std;
// int fact(int p)
// {
//     if(p==0||p==1)
//     {
//         return p;
//     }
//     else 
//     {
//         return fact(p-1)*p;
//     }
// }

// int c(int n,int r)
// {
//     if(n>r)
//     {
//     int t1,t2,t3,t4;
//     t1=fact(n);
//     t2=fact(r);
//     t3=fact(n-r);
//     return t1/(t2*t3);
//     }
//     else return -1;
// }
int c(int n,int r)
{
    if(n>r)
    {
        if(r==0||r==1)
        {
            return 1;
        }
        else 
        {
            return c(n-1,r-1)+c(n-1,r);
        }
    }
}
int main()
{
    int r=3,n=5;

    cout<<c(n,r);
    return 0;
}