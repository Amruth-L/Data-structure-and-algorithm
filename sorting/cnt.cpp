#include<bits/stdc++.h>
using namespace std;

int count(int n)
{int cnt=0;
    int rev=0;
    while(n>0)
    {
    int lastdigit=n%10;
    n=n/10;
    rev=(rev*10)+lastdigit;
    cnt++;
    }
    cout<<rev;
    cout<<"\n"<<cnt;
return 0;
}
int main()
{
    int n;
    cin>>n;
    count(n);
    return 0;
}
