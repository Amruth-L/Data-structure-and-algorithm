#include <bits/stdc++.h>
using namespace std;

void sortbetter(int arr[], int n)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    // Count 0s, 1s, and 2s
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }

    // Place 0s
    for (int i = 0; i < cnt0; i++)
        arr[i] = 0;
    // Place 1s
    for (int i = cnt0; i < cnt0 + cnt1; i++)
        arr[i] = 1;
    // Place 2s
    for (int i = cnt0 + cnt1; i < n; i++)
        arr[i] = 2;
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

    sortbetter(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
