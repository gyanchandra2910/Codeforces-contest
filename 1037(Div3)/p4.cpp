#include<bits/stdc++.h>
using namespace std;

struct Casino {
    long long li, ri, reali;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<Casino> casinos(n);

        for (int i = 0; i < n; ++i) {
            cin >> casinos[i].li >> casinos[i].ri >> casinos[i].reali;
        }

       
        sort(casinos.begin(), casinos.end(), [](const Casino& a, const Casino& b) {
            return a.reali < b.reali;
        });

       
        // You can now proceed with additional logic using the sorted casinos
        int max_coins = k;
        for(int i = 0; i < n; i++)
        {
          if(casinos[i].li <= max_coins && casinos[i].ri >= max_coins) 
          {
              max_coins = casinos[i].reali;  
          }
        }

        cout << max_coins << '\n';
    }

    return 0;
}
