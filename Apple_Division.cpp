#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long  
#define pb push_back
#define f(x,n) for(int i = x ; i < n ; i++)
#define all(x) x.begin(), x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;

void fun(vector<int>& a, int idx, int sum, int total, int &ans) {
    int n = a.size();
    if (idx >= n) {
        ans = min(ans, abs(total - 2 * sum));
        return;
    }

    fun(a, idx + 1, sum + a[idx], total, ans);  
    fun(a, idx + 1, sum, total, ans);        
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    f(0, n) cin >> a[i];
    int total = accumulate(all(a), 0LL);
    int ans = LLONG_MAX;                  
    fun(a, 0, 0, total, ans);
    cout << ans << endl;
}

signed main() {
    Aman();

    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}
