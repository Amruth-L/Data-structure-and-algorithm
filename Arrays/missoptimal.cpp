#include<bits/stdc++.h>
using namespace std;
int missoptimal(int arr[],int n)
{
    int total=(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=arr[i];
    }
    return total-sum;
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
    int miss=missoptimal(arr,n);
    cout<<miss;
    return 0;
}