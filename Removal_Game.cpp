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


void solve() {
    int n; cin>>n;
    vector<int>arr(n), pre(n,0);
    for(int i = 0; i<n; i++) cin>>arr[i];
    pre[0] = arr[0];
    for(int i = 1; i<n; i++) pre[i] = pre[i-1]+arr[i];
    vector<vector<int>>dp(n,vector<int>(n,-1));
    for(int i = n-1; i>=0; i--){
        dp[i][i] = arr[i];
        for(int j = i+1; j<n; j++){
            int a = arr[i]-dp[i+1][j]+(pre[j]-pre[i]);
            int b = arr[j]-dp[i][j-1]+(pre[j-1]-(i-1>=0?pre[i-1]:0));
            dp[i][j] = max(a,b);
        }
    }
    cout<<dp[0][n-1]<<endl;
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