#include<iostream>
using namespace std;
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int main()
{
   int a=4,b=7,c;
   c=add(a,b);
   cout<<"sum of two numbers using function is:"<<c;
    return 0;
}