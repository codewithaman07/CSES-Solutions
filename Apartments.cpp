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
    int n,m,k; cin>>n>>m>>k;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i = 0; i<n; i++) cin>>arr[i];
    for(int i = 0; i<m; i++){
        int num; cin>>num;
        mp[num]++;
    }
    sort(all(arr));
    int cnt = 0;
    for(int i = 0; i<n; i++){
        int x = arr[i];
        auto it = mp.lower_bound(x-k);
        if(it == mp.end() || it->first > x+k) continue;
        cnt++;
        if(--it->second == 0) mp.erase(it);
    }
    cout<<cnt<<endl;
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