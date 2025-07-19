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
    long long n;
    cin >> n;
    vector<long long> noOfZero(n);
    vector<long long> noOfOne(n);
    vector<long long> requiredZero(n);
    vector<long long> requiredOne(n);
    for (long long i = 0; i < n; i++)
    {
      cin >> noOfZero[i] >> noOfOne[i] >> requiredZero[i] >> requiredOne[i];
    }
    long long ans = 0;


    if(noOfOne[0] > requiredOne[0])
    {
      ans += noOfOne[0] - requiredOne[0];
    }
  

    int swaps = 0;
    for(long long i = 0; i < n; i++)
    {
      if(noOfZero[i] != requiredZero[i])
      {
        swaps += abs(noOfZero[i] - requiredZero[i]);
      }

      if(noOfOne[i] != requiredOne[i])
      {
        swaps += abs(noOfOne[i] - requiredOne[i]);
      }
    }

    swaps /= 2; 
    ans += swaps;

    cout << ans << "\n";
  }

  return 0;
}