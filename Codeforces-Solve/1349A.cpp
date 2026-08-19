#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back


void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    map<ll, vector<ll>> mp;
    for(ll i = 0; i < n; i++) {
        for(ll j = 2; j * j <= v[i]; j++) {
            if(v[i] % j == 0) {
                ll cnt = 0;
                while(v[i] % j == 0) {
                    v[i] /= j;
                    cnt++;
                }
                mp[j].pb(cnt);
            }
        } 
        if(v[i] > 1) mp[v[i]].pb(1);
    }
    ll ans = 1;
    for(auto x: mp) {
        if(x.second.size() < n - 1) continue;
        sort(x.second.begin(), x.second.end());

        ll m;
        if(x.second.size() == n) m = x.second[1];    
        else m = x.second[0];
        
        for(ll i = 0; i < m; i++) ans *= (x.first);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
