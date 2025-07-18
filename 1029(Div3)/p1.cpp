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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    bool used = false, isTrue = true;
    for(int i = 0; i < n; i++)
    {
      if(a[i] == 1)
      {
        if(used)
        {
          isTrue = false;
          break;
        }
        else 
        {
          if(i + x >= n)
          {
            isTrue = true;
            break;
          }
          else 
          {
            used = true;
            i += x - 1; // Skip the next x-1 elements
          }
        }
      }
    }

    if(isTrue)
      cout << "YES\n";
    else
      cout << "NO\n";

  }
  
}