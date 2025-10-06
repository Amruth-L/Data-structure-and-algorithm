#include<bits/stdc++.h>
using namespace std;
int majorele(vector<int> v)
{
    int cnt=0;
    int ele;
    for(int i=0;i<v.size();i++)
    {
        if(cnt==0)
        {
            ele=v[i];
        }
        if(v[i]==ele)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    return ele;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = majorele(arr);
    cout << ans;
    return 0;
}