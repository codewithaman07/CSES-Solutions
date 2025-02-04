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

void fun(int n, int a, int b, int c){
    if(n == 0) return;
    fun(n-1, a, c, b);
    cout<<a<<" "<<c<<endl;
    fun(n-1, b, a, c);
}

void solve() {
    int n; cin>>n;
    cout<<(1<<n)-1<<endl;
    fun(n,1,2,3);
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