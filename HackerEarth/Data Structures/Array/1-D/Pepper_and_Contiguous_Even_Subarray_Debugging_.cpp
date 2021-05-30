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
    int arr[n],maxx=0 ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    int count=0 ;
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2==0){
            count++ ;
            maxx=max(maxx,count) ;
            //cout << maxx << ' ' ;
        }
        else    
            count=0 ;
    }
    if(maxx==0)
        cout << -1 << endl ;
    else
        cout << maxx << endl ;
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}