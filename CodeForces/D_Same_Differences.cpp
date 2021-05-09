#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)

void solve(){

    int n ;
    cin >> n ;
    map<ll,ll> m ;
    ll ans=0 ;
    for(int i=0 ; i<n ; i++){
        int x ;
        cin >> x ; 
        m[x-i]++ ;


    }
    for(auto it:m){
        ans+=(ll)(it.second*(it.second-1)/2) ;
    }
    cout << ans << endl ;



}

int main(){

    fastIO() ;
    testcase{
        solve() ;
    }

    return 0 ;
}