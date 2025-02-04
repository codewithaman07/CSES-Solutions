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
    vector<int> a(n);
    f(0,n) cin>>a[i];
    int sum = accumulate(all(a),0);
    vector<int>dp(sum+1,0);
    dp[0] = 1;
    for(int i = 0 ; i<n ; i++) {
        for(int j = sum ; j>=a[i] ; j--) {
            if(dp[j-a[i]]) dp[j] = 1;
        }
    }
    vector<int>ans;
    for(int i = 1 ; i<=sum ; i++) {
        if(dp[i]) ans.pb(i);
    }
    cout<<ans.size()<<endl;
    for(auto x: ans) cout<<x<<" ";
    cout<<endl;
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