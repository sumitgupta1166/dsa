#include <iostream>
using namespace std;
void countduplicate(int a[], int n)
{
    int lastduplicate = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1] && a[i] != lastduplicate)
        {
            cout << a[i] << " ";
            lastduplicate = a[i];
        }
    }
}
void findduplicate(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            int j = i + 1;
            while (a[i] == a[j])
            {
                j++;
            }
            cout << a[i] << "is appearing " << j - 1 << "times\n";
            i = j - 1;
        }
    }
}

int counthduplicate(int a[], int max, int n)
{
    int h[max + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        h[a[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        if (h[i] > 1)
        {
            cout << i << "comes " << h[i] << "times" << endl;
        }
    }
}
int countunsorted(int a[], int n)
{
    int count;
    for (int i = 0; i < n-1; i++)
    {
        count = 1;
        if (a[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {

                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -1;
                }
            }
        }
        if (count > 1)
            cout << a[i] << "comes " << count << "times"<<endl;
    }
}
int counthunsorted(int a[], int max, int n)
{
    int h[max + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        h[a[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        if (h[i] > 1)
        {
            cout << i << "comes " << h[i] << "times" << endl;
        }
    }
}
int main()
{
    int a[] = {3, 5, 8, 8, 10, 12, 15, 15, 15, 20};
    int n = sizeof(a) / sizeof(a[0]);
    // findduplicate(a,n);
    // counthduplicate(a, 20, n);
    int b[]={8,3,6,4,6,5,6,8,2,7,2};
    int m=sizeof(b)/sizeof(b[0]);
    // countunsorted(b,m);
    counthunsorted(b,8,m);
    return 0;
}