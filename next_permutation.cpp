#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void next_permutation(vector<int> &vec)
{
    int pivot = vec.size() - 1, temp, i;
    while (vec[pivot] < vec[pivot - 1])
        pivot--;

    cout << pivot + 1 << endl;
    if (pivot == vec.size() - 1)
    {
        temp = vec[pivot - 1];
        vec[pivot - 1] = vec[pivot];
        vec[pivot] = temp;
    }
    else
    {
        temp = *(vec.end() - 1);
        sort(vec.begin() + pivot, vec.end() - 2);
        i = vec.size() - 1;
        while (i >= pivot)
        {
            vec[i] = vec[i - 1];
            i--;
        }
        vec[i - 1] = temp;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    for (int i = 0; i < 10; i++)
    {
        next_permutation(vec);
        for (int a : vec)
            cout << a << " ";
        cout << endl;
    }
    return 0;
}