#include <bits/stdc++.h>
using namespace std;

int findIndexOfK(vector<int>& a, int k) {
  int n = a.size();
  for (int i = 0; i < n; i++) {
    if (a[i] == k) {
      return i;
    }
  }
  return -1; // If k is not found
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  vector<int> diff(n - 1);
  for (int i = 0; i < n - 1; i++) {
    diff[i] = a[i + 1] - a[i];
  }

  int index = findIndexOfK(a, k);
  if (index == -1) {
    cout << "NO" << endl;
    return;
  }

  for (int i = index; i < diff.size(); i++) {
    if (diff[i] > a[i]) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
