#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
const int mod = 1e9+7;

void solve() {
    ll n; 
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));
    if (arr[n-1][n-1] == '.') dp[n-1][n-1] = 1;
    
    for (int i = n-1; i >= 0; i--) {
        for (int j = n-1; j >= 0; j--) {
            if (arr[i][j] == '*') {
                dp[i][j] = 0;
            } else {
                if (i < n-1) dp[i][j] = (dp[i][j] + dp[i+1][j]) % mod;
                if (j < n-1) dp[i][j] = (dp[i][j] + dp[i][j+1]) % mod;
            }
        }
    }

    cout << dp[0][0] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
