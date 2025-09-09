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
    long long a, b;
    cin >> a >> b;

    long long ans = -1;

    if (b % 2 == 1) {
      if (a % 2 == 1) {
        ans = a * b + 1;
      } else {
        ans = -1;
      }
    } else {
      if (a % 2 == 0) {
        ans = a * (b / 2) + 2;
      } else {
        if (b % 4 == 0) {
          ans = a * (b / 2) + 2;
        } else {
          ans = -1;
        }
      }
    }

    cout << ans << "\n";
  }

  return 0;
}
