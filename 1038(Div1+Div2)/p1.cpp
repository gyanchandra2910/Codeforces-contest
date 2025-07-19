#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    if ((n >= 2 && m >= 3) || (n >= 3 && m >= 2))
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  

  return 0;
}