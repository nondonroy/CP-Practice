#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back


void solve() {
   ll n, m;
   cin >> n >> m;

   vector<string> s(n), str(m);

   for(ll i = 0; i < n; i++)cin >> s[i];
    for(ll i = 0; i < m; i++) cin >> str[i];

    for(ll i = 0; i < m; i++) {
        for(auto x : str[i]) {
            char ch = x;
             ch += 32;

            bool f = false;
            for(ll i = 0; i < n; i++) {
                if(ch == s[i][0]) {
                    f = true;
                }
            }
            if(!f) {
                cout << "NO" << endl;
                return;
            }

        }
    }
    cout << "YES" << endl;
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
