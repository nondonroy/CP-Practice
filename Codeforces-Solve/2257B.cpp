#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back


void solve() {
   ll n, m;
   cin >> n >> m;

   vector<ll> a(n), b(m);
   for(ll i = 0; i < n; i++) cin >> a[i];
   for(ll i = 0; i < m; i++) cin >> b[i];

   ll asum = a[n- 1], bsum = b[m - 1];
    
    for(ll i = 0; i < n - 1; i++) {
        asum += (a[i] - a[i + 1] + 1);
    }
    for(ll i = 0; i < m - 1; i++) {
        bsum += (b[i] - b[i + 1] + 1);
    }
    if(asum >= bsum) cout << 1 << endl;
    else if(asum < bsum) cout << 2 << endl;
  
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
