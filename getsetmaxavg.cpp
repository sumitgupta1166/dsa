#include<iostream>
using namespace std;
struct array{
    int a[10];
    int length;
    int key; 
};
int get(struct array arr,int index)
{
    if(index>=0 && index<arr.length)
    {
          return arr.a[index];
    }
    return -1;
}
void set(struct array *arr,int index,int x )
{
     if(index>=0 && index< arr->length)
     {
        arr->a[index]=x;
     }
}
int max(struct array arr)
{
    int max=arr.a[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.a[i]>max)
        max=arr.a[i];
    }
    return max;
}
int min(struct array arr)
{
    int min=arr.a[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.a[i]<min)
        min=arr.a[i];
    }
    return min;
}
int sum(struct array arr)
{
    int total=0;
    for(int i=0;i<arr.length;i++)
    {
        total+=arr.a[i];
    }
    return total;
}
float avg(struct array arr)
{
    int total=0;
    for(int i=0;i<arr.length;i++)
    {
        total+=arr.a[i];
    }
    return total/arr.length;
}
void display(struct array arr)
{
   int i;
   for(i=0;i<arr.length;i++)
   {
    printf("%d ",arr.a[i]);
   }
}
int main()
{
    struct array arr={{2,3,4,5,6},5,5};
    // set(&arr,3,16);
    // printf("%d\n",get(arr,9));
    //  printf("%d\n",max(arr));
    //  printf("%d\n",min(arr));
    // printf("%d\n",sum(arr));
     printf("%f\n",avg(arr));     
    display(arr);
    return 0;
}