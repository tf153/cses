#include <iostream>
using namespace std;
int zeroes(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i; // (n/5)+(n/25)+(n/125)..........
    return count;
}
int main()
{
    long n, ans, fact;
    cin >> n;
    cout << zeroes(n);
    return 0;
}