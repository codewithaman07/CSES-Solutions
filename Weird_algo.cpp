#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define f(x,n) for(ll i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()  
#define MOD 1000000007

void solve() {
    ll n; cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    cout<<n<<" ";
    while (n != 1) {
        if (n & 1) {
            n *= 3;
            n++;
            cout<<n<<" ";
        }
        else {
            n /= 2;
            cout<<n<<" ";
            // arr.pb(n);
        }
    }
    // for (std::vector<ll>::size_type i = 0; i < arr.size(); i++) {
    //     cout << arr[i] << " ";
    // }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }

    return 0;
}
