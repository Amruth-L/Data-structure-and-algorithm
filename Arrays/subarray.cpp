#include <bits/stdc++.h>
using namespace std;

int subarray1(int arr[], int n)
{
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k]; // add each element to sum
            }
            maxsum = max(maxsum, sum); // update maxsum
        }
    }
    return maxsum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << subarray1(arr, n);
    return 0;
}
