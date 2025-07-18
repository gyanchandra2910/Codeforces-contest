#include<bits/stdc++.h>
using namespace std;
bool checkPerfectSquare(long long area) 
{
      long long root = sqrt(area);
      return root * root == area;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int l1,b1,l2,b2,l3,b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    long long area = l1 * b1 + l2 * b2 + l3 * b3;
    if (checkPerfectSquare(area))
    {
      if(l1 > b1)
      {
        if(l2 + l3 == l1 && b2 == b3 && b1 + b3 == l1)
        {
          cout << "YES\n";
        }
        else if(l1 == l3 && l1 == l2 && b1 + b2 + b3 == l1)
        {
          cout << "YES\n";
        }
        else
        {
          cout << "NO\n";
        }
      }
      else
      {
        if(b2 + b3 == b1 && l2 == l3 && b1 == l1 + l3)
        {
          cout << "YES\n";
        }
        else if(b1 == b2 && b1 == b3 && l1 + l2 + l3 == b1)
        {
          cout << "YES\n";
        }
        else
        {
          cout << "NO\n";
        }
      }
    } 
    else
    {
      cout << "NO\n";
    }
  }
  return 0;
}