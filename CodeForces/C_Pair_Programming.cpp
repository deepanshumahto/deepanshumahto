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
    int k, n, m ;
    cin >> k >> n >> m ;
    int a[n],b[m] ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ;
    }
    for(int i=0 ; i<m ; i++){
        cin >> b[i] ;
    }
    vector<int> v ;
    int ap=0,bp=0,l=k ;
    while(ap<n && bp<m){
        if(a[ap]==0){
            v.push_back(a[ap]) ;
            ap++ ;
            l++ ;
        }
        else if(b[bp]==0){
            v.push_back(b[bp]) ;
            bp++ ;
            l++ ;
        }
        else if(a[ap]<b[bp]){
            if(a[ap]<=l){
                v.push_back(a[ap]) ;
                ap++ ;
            }
            else{
                cout << -1 << endl ;
                return ;
            }    
        }
        else{
            if(b[bp]<=l){
                v.push_back(b[bp]) ;
                bp++ ;
            }
            else{
                cout << -1 << endl ;
                return ;
            }
        }

    }
    
    while(bp<m){
        if(b[bp]==0){
            v.push_back(b[bp]) ;
            bp++ ;
            l++ ;
        }
        else if(b[bp]<=l){
            v.push_back(b[bp]) ;
            bp++ ;
        }
        else{
            cout << -1 << endl ;
            return ;
        }    
    }


    while(ap<n){
        if(a[ap]==0){
            v.push_back(a[ap]) ;
            ap++ ;
            l++ ;
        }
        else if(a[ap]<=l){
            v.push_back(a[ap]) ;
            ap++ ;
        }
        else{
            cout << -1 << endl ;
            return ;
        }    
    }
    
    
    for(int i : v){
        cout << i << ' ' ;
    }
    cout << endl ;

}

int32_t main(){

    ACTIVATEturboBOOST() ;

    testcase(t){
        solve() ;
    }

    return 0 ;
}