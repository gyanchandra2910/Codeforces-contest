// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   long long t;
//   cin >> t;
//   while (t--)
//   {
//     long long n;
//     cin >> n;
//     vector<long long> a(n);
//     vector<long long> b(n);
//     for (long long i = 0; i < n; i++)
//     {
//       cin >> a[i];
//     }
//     for(long long i = 0; i < n; i++)
//     {
//       cin >> b[i];
//     }

//     bool check = false;
//     for(int i = 0; i < n - 1; i++)
//     {
//       if(a[i] != b[i] && (a[i] ^ a[i + 1]) != b[i])
//       {
//         check = true;
//         break;
//       }
//     }

//     if(a[n - 1] != b[n - 1])
//     {
//       check = true;
//     }

//     if(check)
//     {
//       cout << "NO" << endl;
//     }
//     else
//     {
//       cout << "YES" << endl;
//     }

//   }
  
//   return 0;
// }



#include <iostream>
#include<vector>
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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        bool isPossible = true;
 
        if (a[n-1] != b[n-1]) 
        {
            cout << "NO\n";
            continue;
        }
 
        for (int i = n - 2; i >= 0; i--) 
        {
            int x= a[i];
            int y = a[i] ^ a[i+1];
            int z = a[i] ^ b[i+1];
            if (b[i] != x && b[i] != y && b[i] != z) {
                isPossible= false;
                break;
            }
        }
 
        if(isPossible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}