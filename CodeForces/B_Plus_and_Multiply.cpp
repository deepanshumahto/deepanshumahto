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

bool ispresent(int n,int a,int b){

    if(a==1){

        if((n-1)%b==0)
            return true ;
        else 
            return false ;
    }

    int x = 1;
      
    while(x<=n){
        
        if((n-x)%b==0)
            return true ;
        
        x = x*a;
    }
    
    return false ;
}

void solve(){
    
    int n,a,b ;
    cin >> n >> a >> b ;
    
    if(ispresent(n,a,b))
        cout << "Yes" << endl ;
    else 
        cout << "No" << endl ;
}

int32_t main(){

    turboBOOST() ;

    testcase(t){
        solve() ;
    }

    return 0 ;
}