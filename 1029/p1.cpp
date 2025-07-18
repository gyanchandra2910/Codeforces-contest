#include<bits/stdc++.h>
using namespace std;
int findSecondMax(vector<int> &arr) {
    int n = arr.size();
    if (n < 2) return 0; 

    int max1 = INT_MIN, max1_index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max1 = arr[i];
            max1_index = i;
        }
    }
    int second_index = -1;
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (i == max1_index) continue;
        if (arr[i] > max2) {
            max2 = arr[i];
            second_index = i;
        }
    }

    if (second_index == -1) return 0;

    return second_index;
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    vector<int> arr(3,x);
    int cnt = 0;
    while (true)
    {
      int ind = findSecondMax(arr);
      if(arr[ind] == 0)
      {
        cnt++;
        break;
      }
      arr[ind] = arr[ind]/2;
      cnt++;   
      
    }
    cout << cnt << endl;
  }
  
  return 0;
}