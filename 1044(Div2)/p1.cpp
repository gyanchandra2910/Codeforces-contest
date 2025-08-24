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
    for(long long i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    bool containsDuplicate = false;
    for (long long i = 1; i < n; i++)
    {
      if (a[i] == a[i - 1])
      {
        containsDuplicate = true;
        break;
      }
    }

    if (containsDuplicate)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  
  return 0;
}