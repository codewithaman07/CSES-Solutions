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
    int n; cin>>n;
    vector<int>a(n);
    f(0,n) cin>>a[i];
    vector<int>arr;
    arr.pb(a[0]);
    int maxi = 1;
    for(int i = 1; i<n; i++){
        if(a[i] > arr.back()){
            arr.pb(a[i]);
            maxi++;
        }
        else{
            int idx = lower_bound(all(arr),a[i]) - arr.begin();
            arr[idx] = a[i];
        }
    }
    cout<<maxi<<endl;
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