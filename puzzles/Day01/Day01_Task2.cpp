#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int32_t n;
    cin >> n;
    int64_t A[n];
    map<int64_t, int64_t> B;
    for (int i = 0, b; i < n; ++i)
    {
        cin >> A[i] >> b;
        B[b]++;
    }
    long double diff = 0;
    for (int i = 0; i < n; ++i)
    {
        diff += B[A[i]] * A[i];
    }
    cout << fixed << diff;
    return 0;
}
