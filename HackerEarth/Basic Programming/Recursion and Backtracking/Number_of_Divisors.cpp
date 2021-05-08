#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

ll ans(ll n,ll k){
    if(n==0)
        return  0 ;
    return ans(n/k,k)+n*(n+1)/2-k*((n/k)*(n/k+1)/2) ;
    
} 

void solve(){
    ll n,k ;
    cin >> n >> k ;
    ll sum=ans(n,k) ;
    cout << sum << endl ;
} 

int main(){
    
    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}