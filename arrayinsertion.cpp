#include<iostream>
using namespace std;
struct array{
    int a[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    cout<<"elements are"<<endl;
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.a[i]<<" ";
    }
}
void append(struct array *arr,int x)
{
   if(arr->length<arr->size)
   arr->a[arr->length++]=x;
}
void insert(struct array *arr,int index,int x)
{
   if(index>=0 && index<=arr->length)
   {
    for(int i=arr->length;i>index;i--)
    {
        arr->a[i]=arr->a[i-1];
    }
    arr->a[index]=x;
    arr->length++;
   }
}
int delete(struct array *arr,int index)
{
    int x=0;
    if(index>=0 && index<=arr->length)
    {
        x=arr->a[index];
        for(i=index;i<arr->length-1;i++)
        {
            arr->a[i]=arr->a[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
int main()
{
    struct array arr={{2,3,4,5,6},2,5};
    // insert(&arr,5,10);
    // append(&arr,10);
    cout<<delete(&arr,4);
    display(arr);
    return 0;
}