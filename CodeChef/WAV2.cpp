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
    int n,q ;
    cin >> n >> q ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    sort(arr,arr+n) ;
    while(q--){
        int x ;
        cin >> x ;
        int pos=lower_bound(arr,arr+n,x)-arr ;
        if(arr[pos]==x){
            cout << 0 << endl ;
            continue ;
        }
        else{
            if(!(pos&1))
                cout << "POSITIVE" << endl ;
            else
                cout << "NEGATIVE" << endl ;
        } 

    }
}

int32_t main(){

    turboBOOST() ;

    solve() ;

    return 0 ;
}