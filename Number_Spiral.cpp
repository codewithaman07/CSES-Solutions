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
    int x,y; cin>>x>>y;
    int d = max(x,y);
    int ans = d*d - d + 1;
    if(x == y){
        cout<<ans<<endl;
        return;
    }
    if(d&1){
        if(x>y) cout<<ans-abs(x-y)<<endl;
        else cout<<ans+abs(x-y)<<endl;
    }
    else{
        if(x<y) cout<<ans-abs(x-y)<<endl;
        else cout<<ans+abs(x-y)<<endl;
    }
}

signed main() {
    Aman();

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}