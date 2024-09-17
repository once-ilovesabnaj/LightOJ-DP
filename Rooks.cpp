#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int ncr[10000][10000];
int nCr(int n, int r){
    ncr[0][0] = 1;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= r; j++){
            if (i == j){
                ncr[i][j] = 1;
            }else if (i < j){
                ncr[i][j] = 0;
                break;
            }else{
                ncr[i][j] = (ncr[i - 1][j - 1] + ncr[i - 1][j]);
            }
        }
    }
    return ncr[n][r];
}
void Solve () {
    int n, k;
    cin >> n >> k;

    int a = nCr(n, k);
    
    int fact = 1;
    for (int i = 1l; i <= k; i++) {
        fact *= i;
    }
    cout << a * a * fact << endl;
}
signed main() {
    int tc = 0;
    cin >> tc;
    for (int i = 0; i < tc; i++) 
    {
        cout << "Case " << i + 1 << ": ";
        Solve();
    }
    return 0;
}