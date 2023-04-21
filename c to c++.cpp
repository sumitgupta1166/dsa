#include<iostream>
using namespace std;
class rect{
    private:
    int length;
    int breadth;
    public:
    void initialize(int l,int b)  //rect(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void area()
    {
        cout<<length*breadth;
    }
    void changelength(int len)
    {
        length=len;
    }
};
int main()
{
    rect r;
    r.initialize(5,3);
    r.area();
    r.changelength(12);
    return 0;
}