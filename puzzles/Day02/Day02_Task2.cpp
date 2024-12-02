#include <bits/stdc++.h>

using namespace std;

bool good(int n, int A[])
{
    if (A[0] > A[1])
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (A[i] - A[i + 1] < 1 || A[i] - A[i + 1] > 3)
            {
                return false;
            }
        }
    }
    else
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (A[i + 1] - A[i] < 1 || A[i + 1] - A[i] > 3)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, cnt = 0;
    cin >> t;
    for (int j = 0, n; j < t; ++j)
    {
        cin >> n;
        int A[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; ++i)
        {
            int B[n - 1];
            for (int k = 0; k < n; ++k)
            {
                if (k == i)
                    continue;
                B[k - (i < k)] = A[k];
            }
            if (good(n - 1, B))
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}
