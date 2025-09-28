#include <bits/stdc++.h>
using namespace std;

int sar(int arr[], int n)
{
    for (int i = 1; i <= n + 1; i++) // check up to n+1 in case all 1..n are present
    {
        int flag = 0; // declare flag here
        for (int j = 0; j < n; j++) // check all n elements
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) // if i not found in array
            return i;
    }
    return -1; // just in case
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sar(arr, n) << endl;
    return 0;
}
