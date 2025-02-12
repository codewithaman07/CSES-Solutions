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
    vector<pair<int,int>> arr;
    for(int i = 0; i<n; i++){
        int a,b; cin>>a>>b;
        arr.pb({a,1});
        arr.pb({b,-1});
    }
    sort(all(arr));
    int cnt = 0, maxi = 0;
    n = arr.size();
    for(int i = 0; i<n; i++){
        cnt+=arr[i].second;
        maxi = max(maxi,cnt);
    }
    cout<<maxi<<endl;
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