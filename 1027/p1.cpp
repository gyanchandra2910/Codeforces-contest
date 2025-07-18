#include<bits/stdc++.h>
using namespace std;
long main()
{
  long t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    long num = stoi(s);
    bool check = false;
    long i;
    for(i = 0; i <= sqrt(num); i++)
    {
      if(i * i == num)
      {
        check = true;
        break;
      }
    }
    
    if(check)
      cout << 0 << " " << i << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}