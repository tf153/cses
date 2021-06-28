#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] = i + 1;
    }
    if (sum & 1)
    {
        cout << "No";
        return 0;
    }
    bool dp[n + 1][sum / 2 + 1];
    bool possible = subset_sum(arr, sum / 2, dp);
    if (!possible)
    {
        cout << "No";
        return 0;
    }
    cout << "Yes";

    return 0;
}