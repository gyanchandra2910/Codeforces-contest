#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // we'll do exactly 2*(n-1) operations:
        // for i = 2..n: reverse [1..i], then [1..i-1]
        cout << 2*(n-1) << "\n";
        for(int i = 2; i <= n; ++i){
            // reverse prefix of length i
            cout << i << " " << 1 << " " << i << "\n";
            // reverse prefix of length (i-1)
            cout << i << " " << 1 << " " << (i-1) << "\n";
        }
    }
    return 0;
}
