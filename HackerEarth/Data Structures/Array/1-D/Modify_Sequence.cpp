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
    bool yes=true ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]>0){
            arr[i+1]-=arr[i] ;
            arr[i]=0 ;
        }
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]!=0){
            yes=false ;
            break ;
        }
    }
    if(yes)
        cout << "YES" ;
    else    
        cout << "NO" ;
    }

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}