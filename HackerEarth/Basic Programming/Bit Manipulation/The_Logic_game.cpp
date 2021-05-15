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

bool isPowerof2(int n){
    if((n&(n-1))==0)
        return true ;
    return false ;
}

void solve(){
    int n ;
    cin >> n ;
    if(isPowerof2(n)==true){
        cout << n << endl ;
    }
    else{
		int k = (int)(log2(n));
		n=n-(1<<k);
		cout<<n*2<<"\n";
    }
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}