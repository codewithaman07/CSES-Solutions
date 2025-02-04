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
    int n,a,b; cin>>n>>a>>b;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    vector<int>pref(n+1,0);
    for(int i = 1; i<=n; i++){
        pref[i] = pref[i-1] + arr[i-1];
    }
    multiset<int>st;
    int ans = LLONG_MIN;
    for(int i = a; i<=n; i++){
        if(i>b){
            st.erase(st.find(pref[i-b-1]));
        }
        st.insert(pref[i-a]);
        ans = max(ans,pref[i]-*st.begin());
    }
    cout<<ans<<endl;
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