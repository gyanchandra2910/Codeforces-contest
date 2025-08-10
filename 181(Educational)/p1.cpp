#include <bits/stdc++.h>
using namespace std;

bool hasForbidden(string &s) {
    for (int i = 2; i < s.size(); i++) {
        if ((s[i - 2] == 'F' && s[i - 1] == 'F' && s[i] == 'T') ||
            (s[i - 2] == 'N' && s[i - 1] == 'T' && s[i] == 'T')) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        map<char, int> freq;
        for (char c : s) freq[c]++;

        string ans;

        if (!hasForbidden(s)) {
            ans = s;
        } else {
            for (int i = 0; i < freq['T']; ++i) ans += 'T';
            for (int i = 0; i < freq['F']; ++i) ans += 'F';
            for (int i = 0; i < freq['N']; ++i) ans += 'N';

            for (char c = 'A'; c <= 'Z'; ++c) {
                if (c == 'T' || c == 'F' || c == 'N') continue;
                for (int i = 0; i < freq[c]; ++i) ans += c;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
