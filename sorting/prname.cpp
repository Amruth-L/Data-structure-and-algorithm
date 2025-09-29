#include<bits/stdc++.h>
using namespace std;
void f(int i,int n)
{
if(i>n)
return;    
cout<<i;
f(i-1,n);
}
int main()
{
    int n;
    int i;
    cin>>n>>i;
    cin>>i;
    f(n,n);
    return 0;
}