#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int a[n],b[n];
    cout<<"enter the array consisting of negative elements";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<0)
            c++;
    }
    int i=0,ne=0,p=c;
    while(i<n)
    {
        if(a[i]<0)
        {
            if(ne<c)
            {
                b[ne]=a[i];
                ne++;
                i++;
            }
        }
        else{
                b[p]=a[i];
                p++;
                i++;
            }

    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }


return 0;
}