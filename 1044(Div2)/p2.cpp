#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) 
      return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> g(n);
        for (int i = 0; i < n; ++i) 
          cin >> g[i];
        
        sort(g.begin(), g.end());
        long long ans = 0;

        int start = (n % 2 == 1) ? 0 : 1;

        for (int i = start; i < n; i += 2) 
        {
          ans += g[i];
        }
        cout << ans << '\n';
    }
    return 0;
}
