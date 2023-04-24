#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
    char name;
};
int main()
{
    /*float a[5]={0.0};
    for( float s:a)
    {
        cout<<s<<endl;
    }
    */
   struct rectangle r1={10,5,'A'};    //machine showing padding concept becouse it is easier to access 4 byte for character instead of 1byte although is uses only 1 byte here
   cout<<sizeof(r1);
    return 0;
}