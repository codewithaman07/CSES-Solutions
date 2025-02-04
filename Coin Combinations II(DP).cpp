#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
// #define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;


void solve() {
    int n,x; cin>>n>>x;
    vector<int>a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    vector<vector<int>>dp(n+1, vector<int>(x+1, 0));
    for(int i = 0; i<n; i++) dp[i][0] = 1;
    for(int i = n-1; i>=0; i--){
        for(int sum = 1; sum<=x; sum++){
            int skip = dp[i+1][sum];
            int pick = 0;
            if(a[i]<=sum){
                pick = dp[i][sum-a[i]];
            }
            dp[i][sum] = (skip+pick)%M;
        }
    }
    cout<<dp[0][x]<<endl;
}

signed main() {
    // Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}