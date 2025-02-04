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
    int n,q; cin>>n>>q;
    vector<int>arr(n);
    f(0,n) cin>>arr[i];
    vector<int>pre(n,0);
    pre[0] = arr[0];
    for(int i = 1; i<n; i++){
        pre[i] = pre[i-1]^arr[i];
    }
    for(int i = 0; i<q; i++){
        int a,b; cin>>a>>b;
        a--; b--;
        if(a == 0) cout<<pre[b]<<endl;
        else cout<<(pre[b]^pre[a-1])<<endl;
    }
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