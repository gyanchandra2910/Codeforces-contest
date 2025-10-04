#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,a,b) for(int i=a;i<b;i++)

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> pref0(n + 1, 0), pref1(n + 1, 0);
    loop(i, 0, n) cin >> a[i];

    loop(i, 1, n + 1)
    {
        pref0[i] = pref0[i - 1] + (a[i - 1] == 0);
        pref1[i] = pref1[i - 1] + (a[i - 1] == 1);
    }

    set<ll> posEqual;
    loop(i, 0, n - 1)
        if (a[i] == a[i + 1])
            posEqual.insert(i);

    loop(i, 0, q)
    {
        ll l, r;
        cin >> l >> r;
        l--; r--;

        ll count0 = pref0[r + 1] - pref0[l];
        ll count1 = pref1[r + 1] - pref1[l];

        if (count0 % 3 != 0 || count1 % 3 != 0)
        {
            cout << -1 << "\n";
            continue;
        }

        bool hasEqual = false;
        if (r - l + 1 >= 2)
        {
            ll maxStart = r - 1;
            auto it = posEqual.lower_bound(l);
            if (it != posEqual.end() && *it <= maxStart)
                hasEqual = true;
        }

        if (hasEqual)
            cout << (count0 + count1) / 3 << "\n";
        else
            cout << (count0 + count1) / 3 + 1 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
