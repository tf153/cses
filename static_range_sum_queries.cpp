#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, u, v;
    cin >> n >> q;
    long arr[n], sum[n];
    cin >> arr[0];
    sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> u >> v;
        cout << sum[v - 1] - sum[u - 1] + arr[u - 1] << endl;
    }
    return 0;
}