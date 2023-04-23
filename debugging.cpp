#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int a[]={2,4,6,7,9};
    for(auto x:a)
    {
        sum+=x;
        cout<<x<<endl;
    }
    cout<<sum;
    return 0;
}