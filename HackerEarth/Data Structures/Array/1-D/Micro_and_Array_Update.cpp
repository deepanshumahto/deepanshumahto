#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
    int size,n ;
    cin >> size >> n ;
    int minn ;
    for(int i=0 ; i<size ; i++){
        int x ;
        cin >> x ;
        if(i==0)
            minn=x ;
        else{
            minn=min(x,minn) ;
        }
        
    }
    if((n-minn)>=0)
        cout << (n-minn) << endl ;
    else
        cout << 0 << endl ;
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}