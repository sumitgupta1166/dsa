#include<iostream>
using namespace std;
struct reactangle{
    int breadth;
    char length;
};
int main ()
{
    int *a;
    float *b;
    char *c;
    double *d;
    struct rectangle *e;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;      //padding concept
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    //int a[]={3,1,7,2,6,5};
    //int *p=a;
    // for(int i=0;i<6;i++)      
    // {
      //  cout<<a[i]<<endl;        //using variable
   // }
   // cout<<*p;
    // for(int i=0;i<6;i++)
    //{
    //    cout<<*p<<endl;          //using pointer variables
      //  p++;
    //}
    /*int *p;
    p=new int[5];            //using c++ for dynamic allocation
    // p=(int*)malloc(5*sizeof(int));     //using c language for dynamic allocation
    p[0]=2;p[1]=4;p[2]=1;
    p[3]=9;
    p[4]=7;
    for(int i=0;i<5;i++){
    cout<<p[i]<<endl;
    }
    delete[ ]p;        //using c++ for dynamic deallocation
    free(p); 
              //using c for dynamic deallocation
    */
    // int a=10;
    // int *p=&a;
    // cout<<*p;
    // (*p)++;
    // cout<<endl<<a;
    /*int a=10;
    int &r=a;      //reference variable
    cout<<r<<a;
    int b=9;
    r=b;
    cout<<r<<a;
    */
    return 0;
}