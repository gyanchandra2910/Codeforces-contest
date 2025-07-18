#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t;
  cin >> t;
  
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i)
      cin >> a[i];
    
    int res = INT_MAX;

    for (int i = 1; i < n; ++i) {
      if (abs(a[i] - a[i - 1]) <= 1) {
        res = min(res, 0); // already adjacent
      } else {
        int count = 1;
        int y = a[i - 1];
        bool found = false;

        for (int j = i + 1; j < n; ++j) {
          if (abs(a[j] - y) <= 1) {
            found = true;
            break;
          }
          ++count;
        }

        if (found) {
          res = min(res, count);
        }
      }
    }

    if (res == INT_MAX)
      cout << -1 << "\n";
    else
      cout << res << "\n";
  }

  return 0;
}
