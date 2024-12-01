#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int32_t n;
    cin >> n;
    int64_t A[n], B[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i] >> B[i];
    }
    sort(A, A + n);
    sort(B, B + n);
    int64_t diff = 0;
    for (int i = 0; i < n; ++i)
    {
        diff += abs(A[i] - B[i]);
    }
    cout << diff;
    return 0;
}
