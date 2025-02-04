#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
#define MOD 1000000007

void solve() {
    ll n; 
    cin >> n;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= 6; j++) {
            if (i >= j) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }
    cout << dp[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
