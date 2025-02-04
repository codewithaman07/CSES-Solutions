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

int fun(string &a, string &b, int i, int j, vector<vector<int>>&dp){
    if(i < 0) return j+1;
    if(j < 0) return i+1;
    if(dp[i][j] != -1) return dp[i][j];
    if(a[i] == b[j]) return dp[i][j] = fun(a,b, i-1, j-1, dp);
    else{
        return dp[i][j] = 1+min({fun(a,b,i-1,j-1,dp),fun(a,b,i-1,j,dp),fun(a,b,i,j-1,dp)});
    }
}

void solve() {
    string a,b; cin>>a>>b;
    int n = a.size(), m = b.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    cout<<fun(a,b,n,m,dp)<<endl;
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