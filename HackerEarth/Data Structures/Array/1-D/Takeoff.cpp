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
    int n,p,q,r ;
    cin >> n >> p >> q >> r ;
    
    unordered_map<int,int> mp ;
    int count=0 ;
    for(int i=1 ; i<=n ; i++){
        if(i%p==0)
            mp[i]++ ; 
        if(i%q==0)
            mp[i]++ ; 
        if(i%r==0)
            mp[i]++ ;
        if(mp[i]==1)
            count++ ;
    }
    cout << count << endl ;
}

int32_t main(){

    turboBOOST() ;

    testcase(t){
        solve() ;
    }

    return 0 ;
} 