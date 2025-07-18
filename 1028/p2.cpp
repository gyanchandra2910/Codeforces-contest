#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    vector<int> pow2(100005, 1);
    for(int i = 1; i < 100005; ++i)
        pow2[i] = (2LL * pow2[i-1]) % MOD;

    while(t--) {
        int n; cin >> n;
        vector<int> p(n), q(n);
        for(int &x : p) cin >> x;
        for(int &x : q) cin >> x;

        int max_p = 0, max_q = 0;
        vector<int> res(n);
        for(int i = 0; i < n; ++i) {
            max_p = max(max_p, pow2[p[i]]);
            max_q = max(max_q, pow2[q[i]]);
            res[i] = (max_p + max_q) % MOD;
        }
        for(int x : res) 
        cout << x << " ";
        cout << endl;
    }
    return 0;
}