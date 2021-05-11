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
    ll arr[n] ;
    for(ll i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    ll q ;
    cin >> q ;
    while(q--){
        ll l,r,count=0,xorall ;
        cin >> l >> r ;
        for(ll i=(l-1) ; i<r ; i++){
            if(i==(l-1)){
                xorall=arr[i] ;
            }
            else
                xorall^=arr[i] ;
            if(arr[i]==0)
                count++ ;
        }
        cout << xorall << ' ' << count << endl ;
    }
}

int main(){

    fastIO() ;
    
    solve() ;
    
    return 0 ;
}