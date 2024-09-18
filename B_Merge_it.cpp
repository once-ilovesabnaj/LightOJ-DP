#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int a[x], c[3], ans = 0;
        c[0] = 0;
        c[1] = 0;
        c[2] = 0;
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
            c[a[i] % 3]++;
        }
        cout << c[0] + min(c[1], c[2]) + ((max(c[1], c[2]) - min(c[1], c[2])) / 3) << "\n";
    }
    return 0;
}