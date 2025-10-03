#include<bits/stdc++.h>
using namespace std;
string read(int n,vector<int>book,int target)
{int  left=0;int right=n-1;
    sort(book.begin(),book.end());
while(left<right)
{
    int sum=book[left]+book[right];
    if(sum==target)
    {
        return "yes";
    }
    else if(sum<target)
    {
        left++;}
        else{
            right--;
        }}
        return "No";
    }

int main()
{
    int n;
    cin>>n;
vector<int> arr(n); 
    for(int i=0;i<n;i++)
{
    cin>>arr[i];

}
int target;
cin>>target;
cout<<read(n,arr,target);
return 0;
}