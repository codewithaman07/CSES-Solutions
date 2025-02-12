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
    int n,m; cin>>n>>m;
    vector<int>arr(m);
    multiset<int>st;
    for(int i = 0; i<n; i++){
        int num; cin>>num;
        st.insert(num);
    }
    for(int i = 0; i<m; i++) cin>>arr[i];
    for(int i = 0; i<m; i++){
        auto it = st.upper_bound(arr[i]);
        if(it == st.begin()) cout<<-1<<endl;
        else{
            it--;
            cout<<*it<<endl;
            st.erase(it);
        }
    }
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