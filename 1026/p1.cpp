#include <bits/stdc++.h>
using namespace std;
int fun(int n, vector<int> &a)
{
  if (n == 1)
  {
    return 0; // If there's only one element, no operations needed
  }
  if ((*min_element(a.begin(), a.end()) + *max_element(a.begin(), a.end())) % 2 == 0)
  {
    return 0; // If the sum of min and max is even, no operations needed
  }

  sort(a.begin(), a.end());
  int leftVal = 0, rightVal = 0;
  for (int i = n - 1; i >= 1; i--)
  {
    if ((a[0] + a[i]) % 2 != 0)
    {
      rightVal++;
    }
    else
    {
      break;
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    if ((a[i] + a[n - 1]) % 2 != 0)
    {
      leftVal++;
    }
    else
    {
      break;
    }
  }

  return min(leftVal, rightVal);
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    cout << fun(n, a) << endl;
  }

  return 0;
}