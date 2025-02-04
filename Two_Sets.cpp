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
    int sum = n*(n+1)/2;
    if(sum&1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        sum/=2;
        set<int>s1,s2;
        int l = 1, r = n, cnt = 0;
        while(sum>cnt){
            if(cnt+r<=sum){
                s1.insert(r);
                cnt+=r;
                r--;
            }
            if(cnt+l<=sum){
                s1.insert(l);
                cnt+=l;
                l++;
            }
        }
        for(int i = l; i<=r; i++){
            s2.insert(i);
        }
        cout<<s1.size()<<endl;
        for(auto x:s1) cout<<x<<" ";
        cout<<endl;
        cout<<s2.size()<<endl;
        for(auto x:s2) cout<<x<<" ";
        cout<<endl;
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