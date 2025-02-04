#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++) 
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;

int powm(int x, int n) {
    x %= M;
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    int p = powm(x * x % M, n / 2);
    if (n % 2)
        return p * x % M;
    else
        return p;
}

int mod_div(int p, int q) {
    return p % M * powm(q, M - 2) % M;
}
/*_________________________________________________________________________________*/

void solve() {
    string s; cin>>s;
    int n = s.size();
    int odd = 0;
    vector<int>freq(26,0);
    for(auto c : s) freq[c-'A']++;
    for(auto it : freq) if(it & 1) odd++;
    if((odd>0 && n%2 == 0) || (odd>1)){
      cout<<"NO SOLUTION"<<endl;
      return;  
    } 
    int idx = -1;
    string first;
    for(int i = 0; i<26; i++){
        if(freq[i]&1) idx = i;
        for(int j = 0; j<freq[i]/2; j++){
            first.pb(i+'A');
        }
    }
    string second = first;
    reverse(all(second));
    string ans = first;
    if(idx != -1){
        ans.pb('A'+idx);
        ans+=second;
    }
    else ans = ans+second;
    cout<<ans<<endl;
}

signed main() {
    fastio();

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
