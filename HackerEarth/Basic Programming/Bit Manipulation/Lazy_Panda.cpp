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

int countsetbits(int n){
    int count=0 ;
    while(n){
        n&=(n-1) ;
        count++ ;
    }
    return count ;
}

void solve(){
    int n ;
    cin >> n ;
    cout << countsetbits(n) << endl ;
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}