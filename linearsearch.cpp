#include<iostream>
using namespace std;
struct array{
    int arr[5];
    int length;
    int key;
};
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int linearsearch(struct array *arra )
{
    int i;
    for(i=0;i<arra->length;i++)
    {
        if(arra->key==arra->arr[i])
        {
           swap(&arra->arr[i],&arra->arr[i-1]);
        return i;
        }
    }
    return -1;
}

void display(struct array arra)
{
    int i;
    for(i=0;i<arra.length;i++)
    printf("%d",arra.arr[i]);
}
int main()
{
    struct array tarr={{2,3,4,5,6},5,5};
    printf("%d\n",linearsearch(&tarr));
    display(tarr);
    return 0;
}