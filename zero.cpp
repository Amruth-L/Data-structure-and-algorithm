#include<bits/stdc++.h>
using namespace std;
void zero(int arr[],int n)
temp=[];
for(int i=0;i<n;i++)
{
    if(arr[i]!=0)
    temp.add(arr[i]);
}
for(int i=0;i<temp.size();i++)
{
    arr[i]=temp[i];
    int nz=temp.size();
for(int i=nz;i<n;i++)
{
    arr[i]=0;
}}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    zero(arr,n);
    return 0;


}