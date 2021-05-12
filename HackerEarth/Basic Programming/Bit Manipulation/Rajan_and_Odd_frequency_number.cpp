#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
    ll n,xorr ;
    cin >> n ;
    for(ll i=0 ; i<(2*n+1) ; i++){
        ll x ;
        cin >> x ;
        if(i==0)
            xorr=x ;
        else
            xorr=xorr^x ;
    }
    cout << xorr ;
}

int main(){

    fastIO() ;
    
    solve() ;
    
    return 0 ;
}