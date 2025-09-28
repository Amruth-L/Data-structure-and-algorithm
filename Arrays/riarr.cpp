#include<bits/stdc++.h>
using namespace std;
void riarr(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[0]=temp;
}
int main()
{
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    riarr(arr,n);
    cout<<"array after right rotation :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"";
    }
    return 0;
}