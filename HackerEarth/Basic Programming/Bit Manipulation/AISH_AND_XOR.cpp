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
    ll n ;
    cin >> n ;
    ll arr[n+1] ;
    ll xorr[n+1],count0[n+1] ;
    
    count0[0]=0 ;
    for(ll i=1 ; i<=n ; i++){
        cin >> arr[i] ;
        if(i==1)
            xorr[i]=arr[i] ;
        xorr[i]=arr[i]^xorr[i-1] ;
        if(arr[i]==0)
            count0[i]=count0[i-1]+1 ;
        else
            count0[i]=count0[i-1] ;
    }
    
    ll q ;
    cin >> q ;
    while(q--){
        ll l,r ;
        cin >> l >> r ;
        cout << (xorr[r]^xorr[l-1]) << ' ' << (count0[r]-count0[l-1]) << endl ;
    }
}

int main(){

    fastIO() ;
    
    solve() ;
    
    return 0 ;
}