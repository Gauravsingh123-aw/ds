#include<iostream>
using namespace std;
void rotate(int arr[], int n)
{
    int last=arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
            arr[i+1]=arr[i];
    }
    arr[0]=last;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    rotate(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }



return 0;
}