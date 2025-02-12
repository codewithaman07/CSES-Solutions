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
    int n,k; cin>>n>>k;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    map<int,int>mp;
    int l = 0, cnt = 0;
    for(int r = 0; r<n; r++){
        mp[arr[r]]++;
        while(mp.size() > k){
            if(--mp[arr[l]] == 0){
                mp.erase(arr[l]);
            }
            l++;
        }
        cnt+=(r-l+1);
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