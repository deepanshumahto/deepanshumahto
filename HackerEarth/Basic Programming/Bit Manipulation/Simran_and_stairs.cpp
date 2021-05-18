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

int fun(int n){
    if(n==1||n==2)
        return n ;
    else if(n==3)
        return 4 ;
    else    
        return fun(n-1)+fun(n-2)+fun(n-3) ;
}

void solve(){
    int n ;
    cin >> n ;
    cout << fun(n) ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}