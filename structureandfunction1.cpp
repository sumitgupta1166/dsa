#include<iostream>
using namespace std;
struct rect{
    int len;
    int bdth;
};
int area(struct rect r)
{
    return r.len*r.bdth;
}
int peri(struct rect p)
{
    return 2*(p.len+p.bdth);
}
int main()
{
    struct rect r1={3,7};
    cout<<"area"<<area(r1)<<endl;
    cout<<"perimeer"<<peri(r1);
    return 0;
}