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
    vector<int>a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    multiset<int>st;
    for(int i = 0; i<n; i++){
        auto it = st.upper_bound(a[i]);
        if(it!=st.end()){
            st.erase(it);
            st.insert(a[i]);
        }
        else st.insert(a[i]);
    }
    cout<<st.size()<<endl;
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