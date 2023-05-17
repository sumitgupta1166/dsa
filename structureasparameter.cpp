#include<iostream>
using namespace std;
struct rect{
    int length;
    int breadth;
};
void fun(struct rect t)
{
    t.length=20;
   cout<<"length"<<t.length<<endl<<" breadth"<<t.breadth<<endl;
}
struct rect *fun()
{
    struct rect *p;
    p=new rect;
    //p=(struct rect *)malloc(sizeof(struct rect));
    p->length=15;
    p->breadth=7;
    return p;
}
int main()
{
   // struct rect r={10,5};
    //fun( r);
    //cout<<"length"<<r.length<<endl<<" breadth"<<r.breadth;
    struct rect *ptr=fun();
    cout<<"length"<<ptr->length<<endl<<"breadth"<<ptr->breadth;
    return 0;
}