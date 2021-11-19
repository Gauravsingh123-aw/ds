#include<iostream>
using namespace std;
void reverse (int a[],int n)
{
    int c=0,swap;
    for(int i=n-1;i>=n/2;i--)
    {
        swap=a[c];
        a[c]=a[i];
        a[i]=swap;
        c++;
    }
}
void printarray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

}
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int a[n],b[n];
    cout<<"enter the arary";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    reverse(a,n);
    printarray(a,n);


return 0;
}