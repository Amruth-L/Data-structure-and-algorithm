#include<bits/stdc++.h>
using namespace std;
void findunion(int arr1[],int arr2[],int n1,int n2)
{
    set<int>st;
    for(int i=0;i<n1;i++)
    st.insert(arr1[i]);
    for(int i=0;i<n2;i++)
    st.insert(arr2[i]);
cout<<"union of arrays"; 
    for(auto it:st)
    {
        cout<<it<<"";}
        cout<<endl;
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
    findunion(arr1,arr2,n1,n2);
return 0;
}