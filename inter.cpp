#include<bits/stdc++.h>
using namespace std;
vector<int> inter(int arr1[],int arr2[],int n1,int n2)
{
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
      int n1;
    cout<<"enter size of first array";
    cin>>n1;
    int n2;
    cout<<"enter size of second array";
    cin>>n2;
    int arr1[n1],arr2[n2];
    cout<<"enter the first array of elements";
    for(int i=0;i<n1;i++)
    cin>>arr1[i];
    cout<<"enter the second array of elements";
   for(int i=0;i<n2;i++)
    cin>>arr2[i];
    vector<int>res=inter(arr1,arr2,n1,n2);
    cout<<"intersection";
    for(int x:res){
    cout<<x;}
return 0;
}
