#include<bits/stdc++.h>
using namespace std;
void zero2(int arr[],int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0){
        j=i;
        break;
    }}
for(int i=j+1;i<n;i++)
{
    if(arr[i]!=0)
    {
        swap(arr[i],arr[j]);
        j++;
    }
}}
int main()
{
    int n;
    cout<<"enter the numbers";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    zero2(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];

    }
    return 0;
}