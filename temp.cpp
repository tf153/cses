#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pos = 0, neg = 0;
    for (pos = 0; pos < n; pos++)
    {
        if (arr[pos] > -1)
            break;
    }
    for (neg = n - 1; neg >= 0; neg--)
    {
        if (arr[neg] < 0)
            break;
    }
    while (pos > neg)
    {
        
    }
}