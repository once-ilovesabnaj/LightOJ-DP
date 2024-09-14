#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int dx[] = {};
int dy[] = {};
int rec(int i, int j, int n, vector<int> *grid) {
    int row = n * 2;
    int col = min(n, min(2 * n - i, i));
    if (i >= row or j >= col or i <= 0 or j <= 0) {
        return 0;
    }
    int ans = 0;
    
    return ans;
}
void Solve () {
    int n;
    cin >> n;

    vector<int> a[n * 2];
    for (int i = 1; i < 2 * n; i++) {
        int size = min(n, min(2 * n - i, i));
        a[i].resize(size);
        for (int &el : a[i]) {
            cin >> el;
        }
    }
    
    
}
signed main() {
    int tc = 0;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": \n";
        Solve();
    }
    return 0;
}