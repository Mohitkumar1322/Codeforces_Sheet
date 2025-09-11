    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef unsigned long long ull;
    typedef vector<int> vi;
    typedef vector<ll> vll;
    typedef long double ld;
    #define nline "\n" // Fixed to use string literal
    const int L = 26;
    int cnt[L];

    bool check(ll x){
        ll countZero=0;
        ll countDigit=0;
        while(x){
            if(x%10==0){
                countZero++;
            }
            countDigit++;
            x/=10;
        }
        return countZero==countDigit-1;
    }

void mohit() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int i=0;i<n;i++) cin>>grid[i];

    vector<int> rowOnes;
    for(int i=0;i<n;i++){
        int cnt=count(grid[i].begin(),grid[i].end(),'1');
        if(cnt>0) rowOnes.push_back(cnt);
    }
    bool square=all_of(rowOnes.begin(),rowOnes.end(),[&](int x) {return x==rowOnes[0]; });
    if(square){
        cout<<"SQUARE"<<nline;
    }else{
        cout<<"TRIANGLE"<<nline;
    }
}
    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
       
        int t;
        cin>>t;
        while(t--){
            mohit();
        
        }
        return 0;
    }