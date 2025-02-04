#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
// #define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;

vector<string>f(int n){
    if(n == 1) return {"0", "1"};
    vector<string>ans;
    vector<string>temp = f(n-1);
    for(int i = 0; i<temp.size(); i++){
        ans.pb("0"+temp[i]);
    }
    for(int i = temp.size()-1; i>=0; i--){
        ans.pb("1"+temp[i]);
    }
    return ans;
}

void solve() {
    int n; cin>>n;
    vector<string>ans = f(n);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    } 
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