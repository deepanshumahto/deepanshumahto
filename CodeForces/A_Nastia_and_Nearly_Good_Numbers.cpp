#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)

void solve(){
    ll a,b ;
    cin >> a >> b ;
    if(b==1)
        cout << "NO" << endl ;
    else{
        cout << "YES" << endl ;
        cout << a << ' ' << a*b << ' ' << a*(b+1) << endl ;
    }
}

int main(){

    fastIO() ;
    testcase{
        solve() ;
    }

    return 0 ;
}