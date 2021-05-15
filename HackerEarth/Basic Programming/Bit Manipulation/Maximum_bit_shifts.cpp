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

int totalbits(int n){
    return floor(log2(n))+1 ;
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
    int a=0 ;
    for(int i=0 ; i<countsetbits(n) ; i++){
        a=a|1 ;
        a<<=1 ;
    }
    for(int i=0 ; i<(totalbits(n)-countsetbits(n)) ; i++){
        a<<=1 ;
    }
    cout << (a>>1) << ' ' ;
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}