#include<bits/stdc++.h>
using namespace std;
int count(int n)
{   int rev=0;
    int dupli=n;
    while(n>0)
    {
    int lastdigit=n%10;
    n=n/10;
    rev=(rev*10)+lastdigit;
   }
if(rev==dupli)
{cout<<"palindrome";}
else
{cout<<"not palindrome";}
return 0;
}
int main()
{
    int n;
    cin>>n;
    count(n);
    return 0;
}
