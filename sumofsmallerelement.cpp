#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N, Q;
        cin >> N >> Q;

        vector<long long> A(N), B(N);

        for (int i = 0; i < N; i++)
            cin >> A[i];

        for (int i = 0; i < N; i++)
            cin >> B[i];

        // Pair (A[i], B[i])
        vector<pair<long long, long long>> v(N);

        for (int i = 0; i < N; i++)
        {
            v[i] = {A[i], B[i]};
        }

        // Sort according to A
        sort(v.begin(), v.end());

        // Prefix sum of B
        vector<long long> prefix(N);

        prefix[0] = v[0].second;

        for (int i = 1; i < N; i++)
        {
            prefix[i] = prefix[i - 1] + v[i].second;
        }

        // Queries
        while (Q--)
        {
            long long X;
            cin >> X;

            // Find first A > X
            int pos = upper_bound(
                v.begin(),
                v.end(),
                make_pair(X, LLONG_MAX)
            ) - v.begin();

            if (pos == 0)
            {
                cout << 0;
            }
            else
            {
                cout << prefix[pos - 1];
            }

            if (Q > 0)
                cout << " ";
        }

        cout << "\n";
    }

    return 0;
}