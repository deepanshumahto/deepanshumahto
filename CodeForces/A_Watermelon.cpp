#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)

void solve() {
    ll n ;
    cin >> n ;
    if(!(n&1)){
        if(n==2)
            cout << "NO" << endl ;
        else
            cout << "YES" << endl ;
    }
    else    
        cout << "NO" << endl ;
}

int main(){

    fastIO() ;
    solve() ;

    return 0 ;
}