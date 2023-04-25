#include<iostream>
using namespace std;
class arithametic{
private:
int a;
int b;
public:
arithametic(int a,int b)
{
    this->a=a;
    this->b=b;
}
int sum()
{
    return a+b;
}
int sub()
{
    return a-b;
}
};
int main()
{
    arithametic r(10,5);
    cout<<"sum="<<r.sum()<<endl;
    cout<<"difference="<<r.sub();
    return 0;
}