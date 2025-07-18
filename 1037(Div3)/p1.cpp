#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int x;
  cin >> x;
  int min_digit = INT_MAX;
  while (x > 0)
  {
    int digit = x % 10;
    min_digit = min(min_digit, digit);
    x /= 10;
  }
  cout << min_digit << endl;
  return;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  
  return 0;
}