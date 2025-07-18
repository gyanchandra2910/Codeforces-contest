#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    stack<char> st;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
      if (s[i] == '(')
      {
        st.push(s[i]);
      }
      else 
      {
        if (!st.empty() && st.top() == '(')
        {
          st.pop(); // Pop the matching '('
        }
      }

      if(st.empty() == true)
      {
        cnt++; // Increment count for each complete pair found
      }
    }

    if(cnt > 1)
    {
      cout  << "YES" << endl; // Output YES if at least one complete pair is found
    }
    else
    {
      cout << "NO" << endl; // Output NO if no complete pairs are found
    }
  }
  
  return 0; // This is a placeholder main function
}