#include<bits/stdc++.h>
using namespace std;
int element(int arr[],int n)
{for(int i=0;i<n;i++)
{
   int  num=arr[i];
   int cnt =0;
   for (int j=0;j<n;j++)
   {
    if(arr[j]==num)
    cnt++;
   }
   if(cnt==1)
   return num;
}
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
int ans=element(arr,n);
cout<<ans;
return 0;
}