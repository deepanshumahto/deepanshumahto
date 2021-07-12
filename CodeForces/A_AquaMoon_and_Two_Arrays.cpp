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
    int n ;
    cin >> n ;
    int a[n],b[n],diff[n],moves=0,totaldiff=0;
    vector<int> pos ;
    vector<int> neg ;
    for(int i=0 ; i<n ; i++){
        cin >> a[i] ;
    }
    for(int i=0 ; i<n ; i++){
        cin >> b[i] ;
        diff[i]=a[i]-b[i] ;
        totaldiff+=diff[i] ;
        moves+=abs(diff[i]) ;
        if(diff[i]<0){
            for(int j=0 ; j<abs(diff[i]) ; j++) 
                neg.push_back(i) ;
        }
        else if(diff[i]>0){
            for(int j=0 ; j<abs(diff[i]) ; j++)
                pos.push_back(i) ;
        }
        
    }
    moves/=2 ;
    if(totaldiff!=0)
        cout << -1 << endl ;
    else{
        cout << moves << endl ;
        while(pos.size()>0){
            cout << pos[pos.size()-1]+1 << ' ' << neg[neg.size()-1]+1 << endl ;
            neg.pop_back() ;
            pos.pop_back() ;
        }
    }
}

int32_t main(){

    ACTIVATEturboBOOST() ;

    testcase(t){
        solve() ;
    }

    return 0 ;
}