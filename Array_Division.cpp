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

int fun(vector<int>&a, int k, int m){
    int cnt = 1, sum = 0, n = a.size();
    for(int i = 0; i<n; i++){
        if(a[i]>m) return 0;
        if(a[i]+sum>m){
            cnt++;
            sum = a[i];
        }
        else sum+=a[i];
    }
    return cnt<=k;
}
void solve() {
    int n,k; cin>>n>>k;
    vector<int>a(n);
    f(0,n) cin>>a[i];
    int l = 1, h = 1e18, ans = 0;
    while(l<=h){
        int m = l+(h-l)/2;
        if(fun(a,k,m)){
            ans = m;
            h = m-1;
        }
        else l = m+1;
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