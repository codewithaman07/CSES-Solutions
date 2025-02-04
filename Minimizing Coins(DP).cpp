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
    ll n, x;
    cin>>n>>x;
    vector<ll>arr(n);
    f(0,n) cin>>arr[i];

    vector<ll>dp(x+1, 1e9);
    dp[0] = 0;
    for(ll i = 1; i<=x; i++){
        for(int j = 0; j<n; j++){
            if(arr[j]<=i){
                dp[i] = min(dp[i],dp[i-arr[j]]+1);
            }
        }
    }
    cout<< (dp[x] != 1e9 ? dp[x] : -1)<<endl;
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
