#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
      cin >> a[i];
    
    vector<long long> ans;
    for(long long i = 0; i < n; i++)
    {
      ans.push_back(n - a[i] + 1);
    }
    for(long long i = 0; i < n; i++)
    {
      cout << ans[i] << " ";
    }
    cout << "\n";
  }
  
}