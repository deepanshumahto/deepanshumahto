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
    int count=0 ;
    testcase(n){
        int w,h ;
        cin >> w >> h ;
        int l=max(w,h) ;
        int b=min(w,h) ;
        double ratio=(double)l/b ;
        if(ratio>=1.6 && ratio<=1.7)
            count++ ;
    }
    cout << count ;
}

int32_t main(){

    turboBOOST() ;

    solve() ;

    return 0 ;
}