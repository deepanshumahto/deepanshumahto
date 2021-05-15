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

int countsetbits(int n){
    int count=0 ;
    while(n){
        if(n&1)
            count++ ;
        n>>=1 ;
    }
    return count ;
}

void solve(){
    int n ;
    cin >> n ;
    int i=2,sum=0,j=1 ;
     
    while((i+j)<=n){
        while(j<i){
            if((i+j)>n){
                cout << sum << endl ;
                return ;
            }
            sum=(sum+i+j)%mod ;
            j<<=1 ;
        }
        i<<=1 ;
        j=1 ;
    }
    cout << sum << endl ;
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}