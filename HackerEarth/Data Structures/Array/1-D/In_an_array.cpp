#include<bits/stdc++.h>
using namespace std ;
#define turboBOOST() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase(t) int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
    int n,k,x,y ;
    cin >> n >> k >> x >> y ;
    int count=0,arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if((((arr[i]+arr[j])%k)==x) && (((arr[i]*arr[j])%k)==y))
                count++ ;
        }
    }
    
    cout << count << endl ;
}

int32_t main(){

    turboBOOST() ;

    
    solve() ;
    

    return 0 ;
} 