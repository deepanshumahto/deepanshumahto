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
    int arr[10]={0} ;
    for(int i=0 ; i<n ; i++){
        int x ;
        cin >> x ;
        
        int occur[10]={0} ;
        while(x){
            if(occur[x%10]==0){
                arr[x%10]++ ;
                occur[x%10]++ ;
            }
            x/=10 ;
        }
            
    }
    int maxx ;
    for(int i=0 ; i<10 ; i++){
        
        if(i==0)
            maxx=arr[i] ;
        else    
            maxx=max(maxx,arr[i]) ;
    }
    cout << maxx ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}