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

void solve(){
    int n,k,f ;
    cin >> n >> k ;
    int arr[n],b[n] ; 
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    b[0]=arr[0] ;
    while(k--){
        bool allsame=true  ;
        for(int i=1 ; i<n ; i++){
            b[i]=arr[i]|arr[i-1] ;
        }
        for(int i=1 ; i<n ; i++){
            if(arr[i]!=b[i])
                allsame=false ;
            
            arr[i]=b[i] ;
        }
        if(allsame)
            break ;
    }
    for(int i=0 ; i<n ; i++)
        cout << b[i] << ' ' ;

    
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}