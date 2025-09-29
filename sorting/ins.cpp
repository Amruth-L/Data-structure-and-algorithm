#include<bits/stdc++.h>
using namespace std;
void ins_sort(int arr[],int n)
{
    for(int i=1;i<=n-1;i++)
    { int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }

    }
}
int main(){
    int n;
        cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
   ins_sort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
     return 0;
}

