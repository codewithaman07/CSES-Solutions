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
    int n,x; cin>>n>>x;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    map<int,int>mp;
    for(int i = 0; i<n; i++){
        if(mp.find(x-arr[i])!=mp.end()){
            cout<<mp[x-arr[i]]+1<<" "<<i+1<<endl;
            return;
        }
        mp[arr[i]] = i;
    }
    cout<<"IMPOSSIBLE"<<endl;
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