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
    int n, s;
    cin >> n >> s;
    int count = 0;
    while (n--)
    {
      int dx,dy,x,y;
      cin >> dx >> dy >> x >> y;

      if(x == y && dx == dy)
      {
        count++;
      }
      else if(x + y == s && dx != dy)
      {
        count++;
      }
    }

    cout << count << "\n";
  }
  
  return 0;
}