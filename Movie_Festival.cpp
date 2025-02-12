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

void solve() {
    int n; cin>>n;
    vector<pair<int,int>>arr;
    for(int i = 0; i<n; i++){
        int a,b; cin>>a>>b;
        arr.pb({b,a});
    }
    sort(all(arr));
    int last = 0, ans = 0;
    for(auto x: arr){
        if(x.second>=last){
            ans++;
            last = x.first;
        }
    }
    cout<<ans<<endl;
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