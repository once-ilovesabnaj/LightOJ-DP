#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void Solve () {
    int n;
    cin >> n;

    int ans = 0;
    while (n > 1) {
        if (n % 2 == 0) {
            ans += 1;
            n /= 2;
        } else if (n * 2 % 3 == 0) {
            ans++;
            n = n * 2 / 3;
        } else if (n * 4 % 5 == 0) {
            ans++;
            n = n * 4 / 5;
        } else {
            return cout << -1 << endl, void();
        }
    }
    cout << ans << endl;
}
signed main() {
    int tc = 0;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        Solve();
    }
    return 0;
}