#include<bits/stdc++.h>
using namespace std;\
void solve()
{
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }

  int count_no_rain = 0, count = 0;
  for (int i = 0; i < n; ++i)
  {
    if(arr[i] == 0)
    {
      count_no_rain++;
    }
    else
    {
      count_no_rain = 0;
    }
    if(count_no_rain == k)
    {
      count++;
      count_no_rain = 0; 
      i++;
    }
  }
  cout << count << endl;
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
  
}