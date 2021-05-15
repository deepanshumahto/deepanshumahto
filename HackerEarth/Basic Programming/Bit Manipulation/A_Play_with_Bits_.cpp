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

int countunsetbits(int n){
    int count=0 ;
    while(n){
        if((n&1)==0)
            count++ ;
        n>>=1 ;
    }
    return count ;
}

void solve(){
    int n ;
    cin >> n ;
    //int arr[n] ;
    int count=0 ;
    for(int i=0 ; i<n ; i++){
        int x ;
        cin >> x ;
        count+=countunsetbits(x) ;
    }
    cout << count << endl ;
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}