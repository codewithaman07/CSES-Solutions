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
    sort(all(arr));
    int l = 0, r = n-1, cnt = 0;
    while(l<=r){
        if(arr[l]+arr[r]<=x){
            l++;
            r--;
        }
        else r--;
        cnt++;
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