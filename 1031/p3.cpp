#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long w, h, a, b;
        cin >> w >> h >> a >> b;
        
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        // Key insight: For tiling to be possible, both sheets must be placed
        // at positions that follow the same pattern (same modulo position)
        
        // For sheet 1, get position modulo tile size
        // Handle negative coordinates correctly using modular arithmetic
        long long mod_x1 = ((x1 % a) + a) % a;
        long long mod_y1 = ((y1 % b) + b) % b;
        
        // For sheet 2, get position modulo tile size
        long long mod_x2 = ((x2 % a) + a) % a;
        long long mod_y2 = ((y2 % b) + b) % b;
          // If both sheets have the same modulo position, the roof can be tiled
        // without removing them        if (mod_x1 == mod_x2 && mod_y1 == mod_y2) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}
