#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for(int i=a;i<b;i++)

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    loop(i,0,n) cin >> a[i];

    set<ll> s(a.begin(), a.end()); 

    ll result = s.size() + s.size() - 1;

    cout << result << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
