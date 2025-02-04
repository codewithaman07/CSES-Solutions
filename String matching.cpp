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

int get_hash(string s){
    int n = s.size();
    int h = 0;
    for(int i = 0; i < n; i++){
        h = (h*31 + (s[i]-'a'+1))%M;
    }
    return h;
}

vector<int> rabin_karp(string s, string t){
    int n = s.size(), m = t.size(), p = 1;
    for(int i = 0; i < m-1; i++){
        p = (p*31)%M;
    }
    vector<int> pos;
    int ht = get_hash(t);
    int hs = get_hash(s.substr(0, m));
    if(hs == ht) pos.pb(0);
    for(int l = 1, r = m; r < n; l++, r++){
        int del = ((s[l-1]-'a'+1)*p)%M;
        int add = s[r]-'a'+1;
        hs = ((hs - del + M) * 31 + add) % M;
        if(hs == ht) pos.pb(l);
    }
    return pos;
}

signed main() {
    fastio();

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s, t; 
    cin >> s >> t;
    cout << rabin_karp(s, t).size() << endl;
    return 0;
}
