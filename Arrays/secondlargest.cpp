#include<bits/stdc++.h>
using namespace std;
void secondlargest(int arr[],int n)
{
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    int secondlargest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>secondlargest && arr[i]!=largest)
        secondlargest=arr[i];
    }
    cout<<secondlargest;
}
int main()
{
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
   { cin>>arr[i];}
    secondlargest(arr,n);
return 0;
}