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
    string s ;
    cin >> s ;
    int a=1 ;
    for(int i=1 ; i<s.size() ; i++){
        a=(a*2)%mod ;
    }
    cout << a << endl ;
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}