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
    int n ;
    cin >> n ;
    int arr[n],xorr ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    sort(arr,arr+n) ;
    for(int i=0 ; i<n ; i++){
        if(i==0)
            xorr=arr[i] ;
        else if(arr[i]!=arr[i-1]){
            if(xorr!=0)
                cout << xorr << ' ' ;
            xorr=arr[i] ;
            if(i==(n-1))
                cout << xorr ;
        }
        else    
            xorr=arr[i]^arr[i-1] ;
            
    }
    
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}