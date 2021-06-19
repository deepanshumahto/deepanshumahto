#include<bits/stdc++.h>
using namespace std ;
#define turboBOOST() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase(t) int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007

void fileIO(){
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
}

int power(int a,int b){
    int ans=1 ;
    if(b==0)
        return ans ;
    while(b){
        if(b&1)
            ans=(ans*a) ;
        
        a=(a*a) ;
        b/=2 ;
    }
    return ans ;
}

void solve(){
    int n ;
    cin >> n ;
    int arr[n] ;
    int sum=0,count=0 ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
        sum+=arr[i] ;
    }
    if(sum==n){
        cout << 0 << endl ;
        return ; 
    }
    if(sum<n){
        cout << 1 << endl ;
        return ; 
    }
    if(sum>n){
        while(sum>n){
            n++ ;
            count++ ;
        }
        cout << count << endl ;
    }

}

int32_t main(){

    turboBOOST() ;

    testcase(t){
        solve() ;
    }
    

    return 0 ;
}