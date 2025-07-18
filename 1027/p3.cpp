#include<bits/stdc++.h>
using namespace std;
int main()
{
  long t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int cnt = 1;
    int prev = a[0];
    for(int i = 1; i < n; i++)
    {
      if(a[i] > prev + 1)
      {
        cnt++;
        prev = a[i];
      }
    }
    cout << cnt << endl;
  }
  return 0;
}