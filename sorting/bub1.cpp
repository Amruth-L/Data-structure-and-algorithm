#include<bits/stdc++.h>
using namespace std;
void bub_sort(int a[],int n)
{
     for(int i=0;i<=n;i++){
        
        for(int j=0;j<=n-1;j++)
        {
            if(a[j]>a[j+1])
       
         { int temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
       }}}}
int main(){
    int n;
        cout<<"enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    bub_sort(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
     return 0;
}
