#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
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
    ll count=0 ;
    for(int i=1 ; i<n ; i++){
        for(int j=i+1 ; j<=n ; j++){
            if((i^j)<=n)
                count ++ ;
        }
    }
    cout << count << endl ;
}

int main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}