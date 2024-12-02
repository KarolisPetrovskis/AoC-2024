#include <bits/stdc++.h>

using namespace std;

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
        if (A[0] > A[1])
        {
            for (int i = 0; i < n - 1; ++i)
            {
                if (A[i] - A[i + 1] < 1 || A[i] - A[i + 1] > 3)
                {
                    cnt++;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < n - 1; ++i)
            {
                if (A[i + 1] - A[i] < 1 || A[i + 1] - A[i] > 3)
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << t - cnt;

    return 0;
}
