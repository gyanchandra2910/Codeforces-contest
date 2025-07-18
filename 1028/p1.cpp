#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long flower = min(b,d);
    long long gelly = min(a,c);
    if(gelly >= flower)
    {
      cout << "Gellyfish" << endl;
    }
    else
    {
      cout << "Flower" << endl;
    }
  }
  
  return 0;
}