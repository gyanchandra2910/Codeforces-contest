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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
      cin >> a[i];
    
    int target = a[0];
    vector<int> index;
    index.push_back(0);
    for(int i = 1; i < n; i++)
    {
      if(a[i] == target)
      {
        index.push_back(i);
      }
    }

    int prev = 0;
    int cnt = 0;
    for(int i = 1; i < index.size() - 1; i++)
    {
      int start = index[i];
      int end = index[i + 1];
      map<int, int> freq;
      for(int j = prev; j < start; j++)
      {
          freq[a[j]]++;
      }
      bool notFound = true;
      for(int k = start; k < end; k++)
      {
        if(freq.find(a[k]) != freq.end())
        {
          notFound = false;
          break;
        }
      }
      if(notFound)
      {
        cnt++;
      }
    }
    cout << cnt << "\n";
   
  }
  
}