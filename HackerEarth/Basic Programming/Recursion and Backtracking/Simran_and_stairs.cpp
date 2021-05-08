#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)

ll ans(ll n){
    if(n<=0) 
        return 0 ;
    else if(n==1)
        return 1 ;
    else if(n==2)
        return 2 ;
    else if(n==3)
        return 4 ;
    else 
        return ans(n-1)+ans(n-2)+ans(n-3) ;
}

void solve(){
    ll n ;
    cin >> n ;
    cout << ans(n) ;
}

int main(){

    fastIO() ;
    solve() ;

    return 0 ;
}