#include<bits/stdc++.h>
using namespace std;
int missnum(int arr[],int n)
{
    for (int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=0;j<n-1;j++)
{
    if(arr[j]==i)
    {
        flag=1;
        break;
    }
}
if(flag==0)
return i;
 }
 return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
}
int missing = missnum(arr,n);
cout<<missing;
return 0;
}