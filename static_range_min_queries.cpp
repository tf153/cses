#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, u, v;
    cin >> n >> q;
    int arr[n], min[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> u >> v;
        int min = INT_MAX;
        for (int j = u - 1; j < v; j++)
        {
            min = min > arr[j] ? arr[j] : min;
        }
        cout << min << endl;
    }
    return 0;
}