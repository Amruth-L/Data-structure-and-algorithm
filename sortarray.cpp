#include<bits/stdc++.h>
using namespace std;
void sortarray(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {
            cout<<"sorted";
           
        }
        else
        {
            cout<<"unsorted";
           
        }
        break;
    }
}
int main()
{
    int n;
    cout<<"enter the elemnents";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
  {  cin>>arr[i];
}
sortarray(arr,n);
return 0;
}