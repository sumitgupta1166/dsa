#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
         j=i-1;
         temp=a[i];
         while(j>=0&&temp<=a[j])
         {
            a[j+1]=a[j];
            j--;
         }
         a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void selectionsort(int a[],int n)
{
    int temp,min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        // int p=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
            min=j;
            //  p=j;
            }
            // {
            //     temp=a[j];
            //     a[j]=a[n-i-1];
            //     a[n-i-1]=a[j];
            // }
         }
        //  cout<<p;
        // if(max==a[0])
        // {
        //     temp=a[n-i];
        //     a[n-i]=a[0];
        //     a[0]=temp;
        // }
        // else{
        if(min!=i)
        {
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
        }
        // }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void bubblesort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={10,4,9,6,5,2,11,12};
    int n=sizeof(a)/sizeof(a[0]);
    // insertionsort(a,n);
    // selectionsort(a,n);
    bubblesort(a,n);
    return 0;
}