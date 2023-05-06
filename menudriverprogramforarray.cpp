#include<iostream>
using namespace std;
struct array{
    int a[10];
    int size;
    int length;
};
int main()
{
    int ch,x,index;
    struct array arr1;
    cout<<"Enter size of array";
    scanf("%d",&arr1.size);
    arr1=(int *)malloc(arr1.size*sizeof(int));
    do
    {
    cout<<"MENU\n";
    cout<<"1. INSERT\n";
    cout<<"2. DELETE\n";
    cout<<"3. SEARCH\n";
    cout<<"4. SUM\n";
    cout<<"5. DISPLAY\n";
    cout<<"6. EXIT\n";
    Cout<<"Enter your choice";
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:cout<<"Enter an element and index";
               scanf("%d%d",&x,&index);
               insert(&arr1,index,x);
               break;
        case 2:cout<<"Enter index";
               scanf("%d%",&index);
               x=delete(&arr1,index);
               cout<<"Deleted element to search"<<x;
               break;   
        case 3:cout<<"Enter an element to search";
               scanf("%d",&x);
               index=linearsearch(&arr1,index,x);
               cout<<"Element index"<<index;
               break;   
        case 4:cout<<"Sum is "<<sum(arr1);
               break;         
        case 5:display(arr1);             
    } 
    } while(ch<6);
    return 0;
}