#include<bits/stdc++.h>
using namespace std;
void lefdarr(int arr[],int n,int d)
{
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
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
    int d;
    cin>>d;
    lefdarr(arr,n,d);
cout<<"enter the left d rotated elements" ;
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
return 0;
}   