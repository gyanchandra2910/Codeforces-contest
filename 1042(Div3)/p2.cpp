#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  if (!(cin >> t))
   return 0;
  while (t--) 
  {
    int n; cin >> n;

    vector<long long> a;

    for (int i = 0; i < n; ++i) 
    {
      if (i % 2 == 0) 
      a.push_back(-1);
      else 
      a.push_back(3);
    }
    if (n % 2 == 0) a[n-1] = 2; 

    for (auto x : a) cout << x << ' ';
    cout << '\n';
  }
  return 0;
}
