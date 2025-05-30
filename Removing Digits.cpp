#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
const int N = 2e5+20;
ll n, arr[N], d[N][4];
void solve() {
    ll n; cin>>n;
    vector<ll>dp(n+1, 1e9);
    dp[0] = 0;
    for(int i = 1; i<=n; i++){
        string s = to_string(i);
        for(char ch : s){
            int num = ch-'0';
            if(num != 0){
                dp[i] = min(dp[i], dp[i-num]+1);
            }
        }
    }
    cout<< dp[n]<<endl;
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