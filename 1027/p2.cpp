#include <bits/stdc++.h>
using namespace std;
int main()
{
  long t;
  cin >> t;
  while (t--)
  {
    long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    long cnt0 = 0, cnt1 = 0;
    for (char c : s)
    {
      if (c == '0')
        cnt0++;
      else
        cnt1++;
    }
    long minCount, maxCount;
    if (cnt0 == 0 || cnt1 == 0)
    {
      minCount = maxCount = n;
      if ((minCount/2) == k)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
    else if (cnt1 > cnt0)
    {
      minCount = (cnt1 - cnt0) / 2;
      maxCount = cnt1/2 + cnt0/2;
      double result = (k - minCount) / 2.0;
      if (minCount == k || k == maxCount)
      {
        cout << "YES" << endl;
      }
      else if(result == floor(result))
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
    else
    {
      minCount = (cnt0 - cnt1) / 2;
      maxCount = cnt1/2 + cnt0/2;
      double result = (k - minCount) / 2.0;
      if (minCount == k || k == maxCount)
      {
        cout << "YES" << endl;
      }
      else if(result == floor(result))
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}


