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

bool isSpecial(int n){
    
    int previous=n&1,k=n ;
    n>>=1 ;
    while(n){
        if((previous==1)&&((n&1)==1))
            return true ;
        previous=n&1 ;
        n>>=1 ;    
    }
    return false ;
}

void solve(){

}

int32_t main(){

    fastIO() ;
    
    int n,q ;
    cin >> n >> q ;
    int arr[n+1] ;
    arr[0]=0 ;
    for(int i=1 ; i<=n ; i++){
        int x ;
        cin >> x ;
        if(isSpecial(x))
            arr[i]=arr[i-1]+1 ;
        else
            arr[i]=arr[i-1] ;
    }
    int l,r ;
    while(q--){
        cin >> l >> r ;
        cout << arr[r]-arr[l-1] << endl ;
    }
    
    

    return 0 ;
}