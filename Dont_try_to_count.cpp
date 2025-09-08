#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef long double ld;
#define nl "\n" // Fixed to use string literal
const int L = 26;
int cnt[L];

bool subSequncePresent(string &s,string &t){
    int n=s.size(),m=t.size();
    int i=0,j=0;
    while(i<n && j<m){
        if(s[i]==t[j]) j++;
        i++;
    }
    return (j==m);
}

bool substringPresent(const string &s, const string &t) {
    int n = s.size(), m = t.size();
    for (int i = 0; i + m <= n; i++) {
        if (s.substr(i, m) == t) return true;
    }
    return false;
}

void solve(){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    int count=0;
    while(s.size()< m+n){
        if(substringPresent(s,t)){
            cout<<count<<endl;
            return ;
            
        }else{
            s+=s;
            count++;
        }
    }
    if (substringPresent(s, t)) {
        cout << count << "\n";
    } else {
        cout << -1 << "\n"; // not possible
    }



}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}