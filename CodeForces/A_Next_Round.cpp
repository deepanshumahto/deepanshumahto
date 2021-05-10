#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define int long long
void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){

    int n,k,count=0 ;
    cin >> n >> k ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]>=arr[k-1]&&arr[i]>0)
            count++ ;
    }
    cout << count ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

}