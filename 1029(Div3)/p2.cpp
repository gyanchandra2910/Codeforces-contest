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
    int n;
    cin >> n;
    vector<int> ans(n);
    int left = 0, right = n - 1;
    bool choose = true; // true for left, false for right
    for(int i = 1; i <= n; i++)
    {
      if(choose)
      {
        ans[left] = i;
        left++;
        choose = !choose; // Toggle choice
      }
      else
      {
        ans[right] = i;
        right--;
        choose = !choose; // Toggle choice
      }
    }

    for(int i = 0; i < n; i++)
      cout << ans[i] << " ";

    cout << "\n";
  }
  
  return 0;
}