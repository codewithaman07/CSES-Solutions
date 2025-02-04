#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;

bool valid(int x, int m){
    return x>=1 && x<=m;
}

void solve() {
    int n,m; cin>>n>>m;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
    for(int i = 1; i<=m; i++){
        if(arr[0] == i || arr[0] == 0) dp[1][i] = 1;
    }
    for(int i = 2; i<=n; i++){
        for(int k = 1; k<=m; k++){
            if(arr[i-1] != 0 && arr[i-1] != k){
                dp[i][k] = 0;
                continue;
            }
            for(int prev = k-1; prev<=k+1; prev++){
                if(!valid(prev, m)) continue;
                dp[i][k] = (dp[i][k]+dp[i-1][prev])%M;
            }
        }
    }
    int ans = 0;
    for(int i = 1; i<=m; i++){
        ans = (ans+dp[n][i])%M;
    }
    cout<<ans<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}