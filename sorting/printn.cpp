#include<bits/stdc++.h>
using namespace std;
void printdivisor(int n)
{
    for(int i=0;i<n;i++)
    if(n%i==0)
    {cout<<i;
    }
}
int main()
{
    int n;
    cin>>n;
    printdivisor(n);
    return 0;
}