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

int lcm(int a,int b){
    if(a==0||b==0)
        return 0 ;
    return ((a*b)/__gcd(a,b)) ;
}

void solve(){
    int n,l=1 ;
    cin >> n ;
    for(int i=0 ; i<n ; i++){
        int x ;
        cin >> x ;
        l=lcm(l,x) ;
    }
    cout  << l ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}