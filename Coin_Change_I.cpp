#include <bits/stdc++.h>
#define int int64_t
using namespace std;
vector<int> coin, mesurement;
int dp[50 + 1][1000 + 10];
const int mod = 100000007;
int rec(int idx, int coins, int n) {
   if (idx == n or coins <= 0) {
        return coins == 0;
    }
    if (dp[idx][coins] != -1) {
        return dp[idx][coins];
    }
    int ans = 0l;
    for (int i = 0; i <= mesurement[idx]; i++) {
        ans += rec(idx + 1, coins - coin[idx] * i, n);
        if (ans >= mod) {
            ans -= mod;
        }
    }
    return dp[idx][coins] = ans;
}
void Solve () {
    int n, coins;
    cin >> n >> coins;

    coin = vector<int>(n);
    mesurement = vector<int>(n);
    for (int &el : coin) {
        cin >> el;
    }
    for (int &el : mesurement) {
        cin >> el;
    }
    memset(dp, -1, sizeof dp);
    cout << rec(0, coins, n) << endl;
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