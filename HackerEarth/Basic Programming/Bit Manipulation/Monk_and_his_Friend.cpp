#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

void solve() ;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}

void solve(){
    ll a,b ;
    cin >> a >> b ;
    ll n=(a>b)?a:b ;
    ll count=0 ;
    while(n){
        if((a&1)!=(b&1))
            count ++ ;
        a>>=1 ;
        b>>=1 ;
        n>>=1 ;
    }
    cout << count << endl ;
}