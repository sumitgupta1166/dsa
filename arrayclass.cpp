#include<iostream>
using namespace std;
class array{
    private:
    int *a;
    int l;
    int h;
    int size;
    public:
    array()
    {
        int size=10;
        int l=0;
        int h=9;
        int *a=NULL;
        // int a[10]={0};
        // int a=new int[length];
        // a=
    }
     array(int arr[],int sz,int len)
    {
        int size=sz;
        int l=0;
        int h=len;
        int *a=arr;
    }
    ~array()
    {
        // delete []a;
    }
    void missing();
};
void array::missing()
{
    int diff=0;
    for(int i=l;i<h;i++)
    {
        diff=a[i+1]-a[i];
        if(diff>1)
        {
        while(diff!=1)
        {
        cout<<++a[i]<<" ";
        diff--;
        }
        }
    } 
}
int main()
{ 
    int p[5]={2,3,4,6,9};
    array arr(p,10,5);
    arr.missing();

    return 0;
}
    
