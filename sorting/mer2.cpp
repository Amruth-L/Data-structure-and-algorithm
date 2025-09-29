#include <bits/stdc++.h>
using namespace std;

void merge(int x[], int low, int mid, int high)
{
    int i, j, k, l;
    int c[5000];   // temporary array

    i = low;
    j = mid + 1;
    k = low;

    while(i <= mid && j <= high)
    {
        if(x[i] <= x[j])
            c[k++] = x[i++];
        else
            c[k++] = x[j++];
    }

    if(i > mid)
    {
        for(l = j; l <= high; l++)
            c[k++] = x[l];
    }
    else
    {
        for(l = i; l <= mid; l++)   // ✅ corrected (l++)
            c[k++] = x[l];
    }

    for(i = low; i <= high; i++)
        x[i] = c[i];
}

void mergsort(int x[], int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;
        mergsort(x, low, mid);
        mergsort(x, mid + 1, high);
        merge(x, low, mid, high);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int x[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> x[i];

    mergsort(x, 0, n - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << x[i] << " ";
    cout << endl;

    return 0;
}

