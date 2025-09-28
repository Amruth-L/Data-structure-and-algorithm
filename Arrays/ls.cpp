#include<bits/stdc++.h>
using namespace std;
int ls(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
        
    }
    return -1;
}
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
int key;
cout<<"enter the key";
cin>>key;
int res = ls(arr,n,key);
if(res!=-1)
cout<<"number found at index"<<res<<endl;
else
cout<<"element found"<<endl;
return 0;
}