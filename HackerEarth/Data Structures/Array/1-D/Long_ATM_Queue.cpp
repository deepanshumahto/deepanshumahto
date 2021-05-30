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
    int arr[n] ;
    int count=1 ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
        if(i>0){
            if(arr[i]<arr[i-1])
                count++ ;
        }
    }
    cout << count ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}