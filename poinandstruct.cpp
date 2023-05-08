#include<iostream>
using namespace std;
struct rect{
    int length;
    int breadth;
};
int main()
{
    /*rect r={5,4};
    rect *p=&r;            //statically allocated
    */
   struct rect *p;
   //p=(struct rect *)malloc(sizeof(rect));   //dynamically allocation in c
   p=new rect;         //dynamically allocation in c
   p->length=6;
   p->breadth=9;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}