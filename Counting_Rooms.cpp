#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;

void dfs(int i, int j, vector<vector<int>>&vis, vector<string>&grid){
    int n = grid.size(), m = grid[0].size();
    if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || grid[i][j] == '#') return;
    vis[i][j] = 1;
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};
    for (int d = 0; d < 4; d++) {
        dfs(i + dr[d], j + dc[d], vis, grid);
    }
}

void solve() {
    int n,m; cin>>n>>m;
    vector<string>grid(n);
    for(int i = 0; i<n; i++) cin>>grid[i];
    vector<vector<int>>vis(n,vector<int>(m,0));
    int cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j] == '.' && !vis[i][j]){
                cnt++;
                dfs(i,j,vis,grid);
            }
        }
    }
    cout<<cnt<<endl;
}

signed main() {
    cout << fixed << setprecision(20);
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}