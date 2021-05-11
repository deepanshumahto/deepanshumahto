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
    ll n,ans,temp ;
    cin >> n ;
    for(ll i=0 ; i<n ; i++){
        cin >> temp ;
        if(i==0)
            ans=temp ;
        else 
            ans^=temp ;
    }
    if(ans)
        cout << ans << endl ;
    else   
        cout << -1 << endl ;
}

int main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}