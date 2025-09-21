#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long t;
  cin>>t;
  while(t--)
  {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
      cin >> a[i];
    
    vector<long long> freq;
    long long current = a[0], count = 1;
    for(long long i = 1; i < n; i++)
    {
      if(a[i] == current)
        count++;
      else
      {
        freq.push_back(count);
        current = a[i];
        count = 1;
      }
    }
    freq.push_back(count);

    long long ans = 0;
    long long maxFreq = *max_element(freq.begin(), freq.end());

    for (long long k = 1; k <= maxFreq; k++) {
      long long cnt = 0;
      for (auto f : freq) {
        if (f >= k) cnt++;
      }
      ans = max(ans, cnt * k);
    }

    cout << ans << "\n";
  }
  return 0;
}
