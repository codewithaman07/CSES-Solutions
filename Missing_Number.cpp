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
    vector<int>arr(n-1);
    for(int i = 0; i<n-1; i++) cin>>arr[i];
    sort(all(arr));
    int num = 1;
    for(int i = 0; i<n-1; i++){
        if(arr[i] != num){
            cout<<num<<endl;
            return;
        }
        num++;
    }
    cout<<num<<endl;
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