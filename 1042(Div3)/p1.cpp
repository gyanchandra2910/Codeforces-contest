#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    for (long long i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (long long i = 0; i < n; i++)
    {
      cin >> b[i];
    }

    long long cnt = 0;
    for(long long i = 0; i < n; i++)
    {
      if(a[i] > b[i])
      {
        cnt += (a[i] - b[i]);
      }
    }

    cout << cnt + 1 << "\n";
  }
  
  return 0;
}