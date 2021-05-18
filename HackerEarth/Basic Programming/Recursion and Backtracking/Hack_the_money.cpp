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

bool check(int i,int n){
    if(n==i)
        return true ;
    else if(i>n)
        return false ;
    else
        return (check(i*10,n)||check(i*20,n)) ;
    
}

void solve(){
    int n ;
    cin >> n ;
    if(check(1,n))
        cout << "Yes" << endl ;
    else
        cout << "No" << endl ;
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}