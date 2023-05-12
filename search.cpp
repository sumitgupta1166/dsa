using namespace  std;
int main()
{
    string a = "this is a new car";
    string b = "thfis";
    int l=b.length();
    for(int i=0; a[i]!='\0';i++)
    {
        int k=0; 
        for(int j=i;j<=i+l;j++)
        { 
            if(a[j]==b[k])
            k++;
        }
        if(k==l)
        {
        cout<<"word found!";
        break;
        }
        else 
        cout<<"word not found";
    }

    return 0;
}