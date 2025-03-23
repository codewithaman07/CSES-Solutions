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

void fun(int c, vector<string>&board, vector<vector<string>>&ans, vector<int>&row, vector<int>&ld, vector<int>&ud){
    int n = board.size();
    if(c == n){
        ans.push_back(board);
        return;
    }
    for(int r = 0; r<n; r++){
        if(row[r] || ld[r+c] || ud[n-1-r+c] || board[r][c] == '*') continue;
        row[r] = ld[r+c] = ud[n-1-r+c] = 1;
        board[r][c] = 'Q';
        fun(c+1,board,ans,row,ld,ud);
        board[r][c] = '.';
        row[r] = ld[r+c] = ud[n-1-r+c] = 0;
    }
}

void solve() {
    int n = 8;
    vector<vector<string>>ans;
    vector<string>board;
    for(int i = 0; i<n; i++){
        string s; cin>>s;
        board.push_back(s);
    }
    vector<int>row(n,0),ld(2*n-1,0),ud(2*n-1,0);
    fun(0,board,ans,row,ld,ud);
    cout<<ans.size()<<endl;
}

signed main() {
    cout << fixed << setprecision(20);
    Aman();
    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}