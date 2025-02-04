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
    int a,b; cin>>a>>b;
    vector<vector<int>>dp(a+1, vector<int>(b+1, 1e9));
    for(int i = 1; i<=a; i++){
        for(int j = 1; j<=b; j++){
            if(i == j){
                dp[i][j] = 0;
                continue;
            }
            for(int v = 1; v<=i-1; v++){
                dp[i][j] = min(dp[i][j], dp[v][j]+dp[i-v][j]+1);
            }
            for(int h = 1; h<=j-1; h++){
                dp[i][j] = min(dp[i][j], dp[i][h]+dp[i][j-h]+1);
            }
        }
    }
    cout<<dp[a][b]<<endl;
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