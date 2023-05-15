#include<iostream>
using namespace std;
struct rect{
    int length;
    int breadth;
};
void initialize(struct rect *t,int l,int b)
{
    t->length=l;
    t->breadth=b;
}
void changelength(struct rect *q,int len)
{
    q->length=len;
}
void area(struct rect p)
{
   cout<<"area of rectangle"<<p.length*p.breadth;
}
int main()
{
    struct rect r;
    initialize(&r,10,5);
    area(r);
    changelength(&r,15);
    return 0;
}