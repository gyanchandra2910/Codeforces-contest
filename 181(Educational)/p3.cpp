#include<bits/stdc++.h>
using namespace std;
bool check(long long n)
{
  int cnt = 0;
  for(long long i = 2; i < 11; i++)
  {
    if(n % i == 0)
    {
      int temp = i;
      int cntDigit = 0;
      while (temp != 0)
      {
        cntDigit++;
        temp /= 10;
      }
      if(cntDigit == 1)
      {
        return false;;
      }
      
    }
  }
  return true;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    long long ans = 0;
    long long l, r;
    cin >> l >> r;
    for(long long i = l; i <= r; i++)
    {
      if(check(i))
      {
        ans++;
      } 
    }

    cout << ans << "\n";
  }
  
}