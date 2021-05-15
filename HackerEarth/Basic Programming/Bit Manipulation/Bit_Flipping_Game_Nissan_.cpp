#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
    int n,countmove=0 ;
    cin >> n ;
    map<int,int> m ;
    while(n--){
        string s ;
        cin >> s ;
        for(int i=0 ; i<s.length() ; i++){
            if(s[i]=='1')
                m[i]=1 ;
        }
    }
    for(auto i:m)
        countmove+=i.second ;
    if(countmove&1)
        cout << 'A' << endl ;
    else    
        cout << 'B' << endl ;
    cout << countmove ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}