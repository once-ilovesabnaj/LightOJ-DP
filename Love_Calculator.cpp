#include <bits/stdc++.h>
#define int int64_t
using namespace std;
string a, b;
int LenA, LenB;
pair<int, int> dp[31][31];
pair<int, int> rec(int i, int j) {
    if (i == a.size() or j == b.size()) {
        return {max(a.size() - i, b.size() - j), 1};
    }
    if (dp[i][j].first != -1 and dp[i][j].second != -1) {
        return dp[i][j];
    }
    pair<int, int> ans = {0, 0};
    if (a[i] == b[j]) {
        ans = rec(i + 1, j + 1);
        ans.first++;
    } else {
        pair<int, int> fi = rec(i + 1, j);
        pair<int, int> fj = rec(i, j + 1);
        if (fi.first == fj.first) {
            ans = {fi.first + 1, fi.second + fj.second};
        } else {
            if (fi.first < fj.first) {
                ans = {fi.first + 1, fi.second};
            } else {
                ans = {fj.first + 1, fj.second};
            }
        }
    }
    return dp[i][j] = ans;
}
void Solve () {
    cin >> a >> b;
    auto [size, cnt] = rec(0, 0);
    cout << size << " " << cnt << endl;
}
signed main() {
    int tc = 0;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        for (int ii = 0; ii <= 30; ii++) {
            for (int jj = 0; jj <= 30; jj++) {
                dp[ii][jj] = {-1, -1};
            }
        }
        cout << "Case " << i + 1 << ": ";
        Solve();
    }
    return 0;
}