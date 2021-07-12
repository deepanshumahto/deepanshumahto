#include<bits/stdc++.h>
using namespace std ;
#define ACTIVATEturboBOOST() \
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
    int n,s ;
    cin >> n >> s ;
    int arr[n],count[32]={0} ;
    int ans=0 ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
        int k=1 ;
        for(int j=0 ; j<32 ; j++){
            if(k&arr[i])
                count[j]++ ;
            k<<=1 ;
        }
    }
    for(int i=0 ; i<32 ; i++){
        if(count[i]%s==0)
            ans+=count[i]/s ;
        else    
            ans+=count[i]/s+1 ;
    }
    cout << ans << endl ; 
}

int32_t main(){

    ACTIVATEturboBOOST() ;

    testcase(t){
        solve() ;
    }

    return 0 ;
}