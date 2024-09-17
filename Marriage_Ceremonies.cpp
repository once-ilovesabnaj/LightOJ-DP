#include <bits/stdc++.h>
#define int int64_t
using namespace std;
vector<vector<int>> ar;
int dp[20][1LL << 17];
int rec(int row, int mask, int n) {
    if (row == n) {
        return 0;
    }
    if (~dp[row][mask]) {
        return dp[row][mask];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (!(mask >> i & 1)) {
            ans = max(ans, ar[row][i] + rec(row + 1, mask | (1LL << i), n));
        }
    }
    return dp[row][mask] = ans;
}
void Solve () {
    int n;
    cin >> n;
    memset(dp, -1, sizeof dp);
    ar = vector<vector<int>>(n, vector<int>(n));
    for (auto &a : ar) {
        for (int &el : a) {
            cin >> el;
        }
    }
    cout << rec(0, 0, n) << endl;
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