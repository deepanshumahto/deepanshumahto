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
    vector<int> v(n) ;
    int least=0,secondleast=1 ;
    for(int i=0 ; i<n ; i++){
        cin >> v[i] ;
    }

    sort(all(v)) ;
    for(int i=0 ; i<n-1 ; i++){
        if(abs(v[i]-v[i+1])<(v[secondleast]-v[least])){
            least=i ;
            secondleast=i+1 ;
            }
    }
    //cout << v[least] << ' ' << v[secondleast] << endl ;
    cout << v[least] << ' ' ;
    for(int i=secondleast+1 ; i<n ; i++){
        cout << v[i] << ' ' ;
    }
    for(int i=0 ; i<least ; i++){
        cout << v[i] << ' ' ;
    }
    cout << v[secondleast] << endl ;
}

int32_t main(){

    turboBOOST() ;

    testcase(t){
        solve() ;
    }

    return 0 ;
}