#include<bits/stdc++.h>
using namespace std ;
#define turboBOOST() \
    ios_base::sync_with_stdio(false) ; \
    cin.tie(NULL) ; \
    cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase(t) int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define print(x) cout << x << endl

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
    set<int> a ;
    for(int i=0 ; i<n ; i++){
        int x ;
        cin >> x ;
        a.insert(x) ;
    }
    int m ;
    cin >> m ;
    set<int> c ;
    for(int i=0 ; i<m ; i++){
        int x ;
        cin >> x ;
        c.insert(x) ;
    }
    set<int> b ;
    map<int,int> mp ;
    for(int x : c){
        for(int y : a){
            if(x>y)
                mp[x-y]++ ;
        }
    }

    for(auto it : mp){
        if(it.second==n)
            b.insert(it.first) ;
    }
    
    for(int i : b)
        cout << i << ' ' ;
    
}

int32_t main(){

    turboBOOST() ;

    
        solve() ;
    

    return 0 ;
}