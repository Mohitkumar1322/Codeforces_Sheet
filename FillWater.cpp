#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define nl '\n'
#define mod 100000007


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool continous_container=false;
    int totalContainer=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'&&i+1<n&&s[i+1]=='.'&&i+2<n&& s[i+2]=='.'){
            continous_container=true;
            break;
        }
        if(s[i]=='.'){
            totalContainer++;
        }
        
    }
    if(continous_container){
        cout<<2<<endl;
    }else{
        cout<<totalContainer<<endl;
    }
    //cout<<count<<endl;


}

    

int main() {
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    
    
    return 0;
    
}