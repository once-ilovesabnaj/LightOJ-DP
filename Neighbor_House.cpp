#include <bits/stdc++.h>
#define int int64_t
using namespace std;
#ifndef ONLINE_JUDGE
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define dbg(x)
#endif
vector<vector<int>> a;
void Solve () {
    int n;
    cin >> n;
    a = vector<vector<int>>(n, vector<int>(3));
    for (auto &ar : a) {
        for (int &el : ar) {
            cin >> el;
        }
    }
    vector<vector<int>> dp(n, vector<int>(3, 0));
    dp[0][0] = a[0][0], dp[0][1] = a[0][1], dp[0][2] = a[0][2];

    for (int row = 1; row < n; row++) {
        for (int col = 0; col < 3; col++) {
            int ans = 1e18;
            for (int take = 0; take < 3; take++) {
                if (col != take) {
                    ans = min(dp[row - 1][take], ans);
                }
            }
            dp[row][col] = ans + a[row][col];
        }
    }
    cout << *min_element(dp[n - 1].begin(), dp[n - 1].end()) << endl;
}
signed main() {
    int tc = 0;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        cout << "Case " << i + 1 << ": ";
        Solve();
    }
    return 0;
}