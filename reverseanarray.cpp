#include<iostream>
using namespace std;
    struct array{
        int a[10];
        int length;
        int key;
    };
    void reverse(struct array *tarr)
    {
       
        int i,j;
        int *b=new int[10]();
        for(i=tarr->length-1,j=0;i>=0;i--,j++)
        {
            b[j]=tarr->a[i];
        }
        for(i=0;i<tarr->length;i++)
        {
            tarr->a[i]=b[i];
        }
    }
    void display(struct array arr)
    {
        for(int i=0;i<arr.length;i++)
        {
        cout<<" "<<arr.a[i];
        }
    }
    void reverse2(struct array *tarr)
    {
        int temp,i=0,j=tarr->length-1;
        while(i<j)
        {
             temp=tarr->a[i];
             tarr->a[i]=tarr->a[j];
             tarr->a[j]=temp;
            i++;
            j--;
        }
    }
int main()
{
    struct array t={{2,3,4,5,6},5,5};
    reverse2(&t);
    display(t);
    return 0;
}