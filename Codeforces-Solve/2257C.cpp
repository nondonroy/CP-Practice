#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back


void solve() {
    ll n;
    cin >> n;

    for(ll i = 2; i <= n; i++) {
        ll v;
        cin >> v;
    }
    ll m;
    cin >> m;
    vector<ll> vis(m);
    for(ll i = 0; i < m; i++) cin >> vis[i];

    sort(vis.begin(), vis.end());
    
    cout << m - 1 << " ";
    for(ll i = 1; i < m; i++) {
        cout << vis[i] <<  " ";
    }cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
