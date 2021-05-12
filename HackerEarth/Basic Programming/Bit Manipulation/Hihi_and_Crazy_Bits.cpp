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
    ll i=1,k=n ;
    while(k){
        if((k&1)==0)
            break ;
        k>>=1 ;
        i<<=1 ;
    }
    cout << (n|i) << endl ;

}

int main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}