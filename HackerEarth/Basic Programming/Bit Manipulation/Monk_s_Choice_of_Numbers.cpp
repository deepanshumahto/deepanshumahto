#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

ll countsetbits(ll n){
    ll ans=0 ;
    while(n){
        if(n&1)
            ans++ ;
        n>>=1 ; 
    }
    return ans ;
}

void solve(){
    ll n,k;
        cin >> n>> k ;
        ll x ;
        ll a[n] ;
        for(ll i=0 ; i<n ; i++){
            cin >> x;
            a[i] = countsetbits(x);
        }
        sort(a,a+n);
        ll sum=0;
        for(int i=n-1 ; i>=n-k ; i--){
            sum+=a[i];
        }
        cout<<sum<<endl;
}

int main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}