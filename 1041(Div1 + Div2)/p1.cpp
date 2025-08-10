#include<bits/stdc++.h>
using namespace std;

long long findMex(const vector<long long>& a, long long i)
{
    if(a[i] != 0 && a[i + 1] != 0 && a[i + 2] != 0)
    {
      return 0;
    }
    else if(a[i] != 1 && a[i + 1] != 1 && a[i + 2] != 1)
    {
      return 1;
    }
    else if(a[i] != 2 && a[i + 1] != 2 && a[i + 2] != 2)
    {
      return 2;
    }

    return -1;
}

bool findEqual(const vector<long long>& a, long long i)
{
    return (a[i] != a[i + 1] && a[i + 1] != a[i + 2] && a[i] != a[i + 2]);
}

int main()
{
    long long t;
    cin >> t;
    while (t--) 
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        vector<long long> mins(n - 2);
        vector<long long> maxs(n - 2);
        vector<long long> mex(n - 2);
        vector<bool> contain0(n - 2, false);

        for (long long i = 0; i < n - 2; i++)
        {
          mins[i] = min(a[i], min(a[i + 1], a[i + 2]));
          maxs[i] = max(a[i], max(a[i + 1], a[i + 2]));
          mex[i] = findMex(a, i);

          contain0[i] = (a[i] == 0 || a[i + 1] == 0 || a[i + 2] == 0);
        }

        bool valid = true;
        for(long long i = 0; i < n - 2; i++)
        {
            if(mins[i] != -1 && maxs[i] - mins[i] != mex[i])
            {
              valid = false;
              break;
            }
            else if(mins[i] == -1 && contain0[i])
            {
              valid = false;
              break;
            }
            else if(mins[i] == -1 && findEqual(a, i))
            {
              valid = false;
              break;
            }
        }
        if(valid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
}