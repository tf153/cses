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
    cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}