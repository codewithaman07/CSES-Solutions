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
    vector<int>price(n), pages(n);
    for(int i = 0; i<n; i++) cin>>price[i];
    for(int i = 0; i<n; i++) cin>>pages[i];
    vector<vector<int>>dp(n+1, vector<int>(x+1, 0));
    // base case dp[0][x] = 0 and for(i = 0,n) dp[i][0] = 0
    // state -- dp[i][j] = maximum number of pages that can be bought using first i books and j money
    // dp[i][j] = 0 to i books and x to j money 
    for(int i = 1; i<=n; i++){
        for(int j = x; j>=0; j--){
            int x = price[i-1];
            int y = pages[i-1];
            if(j>=x){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-x] + y);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout<<dp[n][x]<<endl;
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