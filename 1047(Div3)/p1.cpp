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
    long long k, x;
    cin >> k >> x;

    x = x * pow(2, k);

    cout << x << "\n";
  }
  
}