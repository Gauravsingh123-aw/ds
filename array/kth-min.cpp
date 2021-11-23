#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count,k;
    cout<<"enter the size of array";
    cin>>count;
    int a[count];
    for (int i = 0; i < count; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the k value";
    cin>>k;
    sort(a,a+count);
    cout<<"kth maximum is"<<a[k-1]<<endl;
    cout<<"kth minimum is"<<a[count-k]<<endl;

return 0;
}