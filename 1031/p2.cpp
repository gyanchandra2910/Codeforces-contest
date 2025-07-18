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
    long long w, h, a, b;
    cin >> w >> h >> a >> b;
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    long long l1 = x1 + a;
    long long l2 = y1;

    long long k1 = x1 + a;
    long long k2 = y1 + b;

    long long n1 = x2;
    long long n2 = y2;
    
    long long m1 = x2;
    long long m2 = y2 + b;

    long long p1 = x2 + a;
    long long p2 = y2;

    if(n2 <= k2 && k2 <= m2 && (n1 - k1) % x2 != 0)
    {
      cout << "NO\n";
    }
    else if(n2 <= l2 && l2 <= m2 && (n2 - k1) % x2 != 0)
    {
      cout << "NO\n";
    }
    else if(x1 <= n1 && n1 <= l1 && (n2 - k2) % y2 != 0)
    {
      cout << "NO\n";
    }
    else if(x1 <= p1 && p1 <= l1 && (p2 - k2) % y2 != 0)
    {
      cout << "NO\n";
    }
    else 
    {
      cout << "YES\n";
    }

  }
  
  return 0;
}