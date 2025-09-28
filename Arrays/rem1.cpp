#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int arr[n]={1,1,1,2};
    int i=0;
    for(int j=1;j<n;j++)
    { if(arr[j]!=arr[i])
        {
        arr[i+1]=arr[j];
    i++;
}}
int k=i+1;
cout<<k;
 cout << "Unique elements: ";
    for(int x = 0; x < k; x++)
    {
        cout << arr[x] << " ";
    }
    cout << endl;

    return 0;
}
