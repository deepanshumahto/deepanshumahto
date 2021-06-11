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

int power(int a,int b,int m){
    int ans=1 ;
    if(b==0)
        return ans ;
    while(b){
        if(b&1)
            ans=(ans*a)%m ;
        
        a=(a*a)%m ;
        b/=2 ;
    }
    return ans ;
}

void solve(){
    int n,m ;
    cin >> n >> m ;
    cout << power(power(2,n,mod)-1,m,mod) << endl ;
}

int32_t main(){

    turboBOOST() ;

    testcase(t){
        solve() ;
    }
    
    return 0 ;
} 