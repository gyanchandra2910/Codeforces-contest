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
    int a, x, y;
    cin >> a >> x >> y;
    if((x <= a && a <= y) || (y <= a && a <= x)) 
    {
      cout << "NO\n";
    }
    else if(abs(x - a) == 0 || abs(y - a) == 0)
    {
      cout << "NO\n";
    }
     else 
    {
      cout << "YES\n";
    }
  }

}