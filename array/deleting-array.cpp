#include<iostream>
using namespace std;
int main()
{
    int count;
    cin>>count;
    int a[count];
    cout<<"enter the array";
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < count; i++)
    {
        cout<<a[i]<<" ";
    }
    int pos;
    cout<<"enter the pos ";
    cin>>pos;
    for(int i=pos;i<count;i++)
    {
            a[i]=a[i+1];
    }
    a[count-1]=0;
    for (int i = 0; i < count; i++)
    {
        cout<<a[i]<<" ";
    }


return 0;
}