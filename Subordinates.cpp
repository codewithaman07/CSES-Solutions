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
    vector<vector<int>>adj(n+1);
    vector<int>subtree(n+1,0);
    for(int i = 2; i<=n; i++){
        int par; cin>>par;
        adj[par].pb(i);
    }
    auto dfs = [&](int node, auto &&dfs) -> void {
        subtree[node] = 1;
        for (auto child : adj[node]) {
            dfs(child, dfs);  
            subtree[node] += subtree[child];
        }
    };
    dfs(1,dfs);
    for(int i = 1; i<=n; i++) cout<<subtree[i]-1<<" ";
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