#include<iostream>
using namespace std;
struct array{
    int a[10];
    int length;
    int size;
};
void display(struct array arr)
{
   for(int i=0;i<arr.length;i++)
   {
    cout<<" "<<arr.a[i];
   }
}
void insertsort(struct array *arr,int x)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
    return; 
    while(i>=0 && arr->a[i]>x)
    {
    arr->a[i+1]=arr->a[i];
    i--;
    }
    arr->a[i+1]=x;
    arr->length++;
}    

int issort(struct array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.a[i]>arr.a[i+1])
        return 0;
    }
    return 1;
}
void rearrange(struct array*arr)
{
    int i=0;
    int j=arr->length-1;
    while(i<j)
    {
        while(arr->a[i]<0)
        i++;
        while(arr->a[j]>=0)
        j--;
        if(i<j)
        {
           int temp=arr->a[j];
           arr->a[j]=arr->a[i];
           arr->a[i]=temp;
        }
    }
}

int main()
{
    struct array arr={{2,-3,5,10,-15,-7,-8},7,10};
    // insertsort(&arr,1);
    // cout<<issort(arr)<<"\n";
    rearrange(&arr);
    display(arr);
    return 0;
}