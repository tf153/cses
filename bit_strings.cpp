#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unsigned long ans = 2;
    for (long i = 1; i < n; i++)
    {
        ans = ans << 1;
        ans = ans % 1000000007;
    }
    cout << ans;
    return 0;
}