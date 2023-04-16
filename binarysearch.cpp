#include<iostream>
using namespace std;
struct array{
    int arr[5];
    int length;
    int key;
};
int rbinarysearch(struct array arra, int key)
{
    int l=0,mid,h;
    h=arra.length;
      while(l<=h)
      { 
        mid=(l+h)/2;
        if(key==arra.arr[mid])
        return mid;
        else if(key<arra.arr[mid])
        {
            h=mid-1;
        }
        else 
        l=mid+1;
      }
      return -1;
}
int Rbinsearch(int a[],int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        return mid;
        else if(key<a[mid])
        {
            return Rbinsearch(a,l,mid-1,key);
        }
        else
        return Rbinsearch(a,mid+1,h,key);


    }
    return -1;
}
int main()
{
      struct array tarr={{2,3,4,5,6},10,5};
      printf("%d\n",Rbinsearch(tarr.arr,0,tarr.length,9));
      return 0;
}