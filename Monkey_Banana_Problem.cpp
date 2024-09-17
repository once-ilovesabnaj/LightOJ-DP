#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int n, grid[201][101];
int get(int r) {
    int size = r;
    if (r >= n) {
        size = 2 * n - r - 2;
    }
    return size;
}
void Solve () {
    cin >> n;

    for (int i = 0; i < n * 2 - 1; i++) {
        int size = i;
        if (i >= n) {
            size = 2 * n - i - 2;
        }
        for (int j = 0; j <= size; j++) {
            cin >> grid[i][j];
        }
    }
    int dp[201][101]{0};
    dp[0][0] = grid[0][0];

    for (int r = 1; r < 2 * n - 1; r++) {
        int rangeUpperColumn = get(r - 1);
        for (int c = 0; c <= get(r); c++) {
            int ans = 0;
            if (c - 1 >= 0 and r < n) {
                ans = max(ans, dp[r - 1][c - 1]);
            }
            if (c <= rangeUpperColumn) {
                ans = max(ans, dp[r - 1][c]);
            }
            if (c + 1 <= rangeUpperColumn and r >= n) {
                ans = max(ans, dp[r - 1][c + 1]);
            }
            dp[r][c] = ans + grid[r][c];
        } 
    }
    cout << dp[2 * n - 2][0] << endl;
}
signed main() {
    int tc = 0;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        Solve();
    }
    return 0;
}