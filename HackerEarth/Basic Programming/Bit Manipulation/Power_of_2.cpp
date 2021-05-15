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

bool ispowerof2(int n){
    return !(n&(n-1)) ;
}

void solve(){
    
}

int32_t main(){

    fastIO() ;
    
    int count=0 ;
    testcase{
        int n ;
        cin >> n ;
        if(ispowerof2(n))
            count++ ;
    }
        cout << count ; 

    return 0 ;
}