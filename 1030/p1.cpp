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
    int n, k;
    cin >> n >> k;
    string ans = "";
    for(int i = 0 ; i < n; i++)
    {
      if(k > 0)
      {
        ans += '1';
        k--;
      }
      else
      {
        ans += '0';
      }
    }
    cout << ans << "\n";
  }
  
  return 0;
}