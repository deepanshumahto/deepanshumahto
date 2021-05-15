#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int nextgreaterpowerof2(int n){
    int i=1 ;
    while(i<=n){
        i<<=1 ;
    }
    return i ;
}

void solve(){
    int n ;
    cin >> n ;
    int minxor=n,maxxor ;
    maxxor=nextgreaterpowerof2(n)-1-n ;
    cout << minxor << ' ' << maxxor ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}