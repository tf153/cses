int fun(int arr[], int n)
{
    int arr_mid[n];
    for (int i = 0; i < n; i++)
    {
        arr_mid[i] = arr[i];
    }
    bool flag = false;
    int ans = 0;
    while (!flag)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                flag = true;
                continue;
            };
            if (arr[i] & 1)
            {
                ans++;
            }
            arr[i] >>= 1;
            if (arr[i] == 1)
            {
                flag = true;
            };
        }
    }
    while (arr_mid[0] > arr[0])
    {
        if (arr[0] * 2 <= arr_mid[0])
        {
            arr[0] <<= 1;
            ans += 1;
        }
    }
    return ans;
}