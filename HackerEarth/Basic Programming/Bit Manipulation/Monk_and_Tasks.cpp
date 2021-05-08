#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int countsetbits(ll n){
    int count=0 ;
    while(n){
        if(n&1)
            count++ ;
        n>>=1 ;
    }
    return count ;
}

void solve() ;

int main(){
    
    fastIO() ;
    
    testcase{
        solve() ;
    } 

    return 0 ;
}

void solve(){
    int n ;
    cin >> n ;
    int x ;
    vector<int> v[63] ;
        int maxsetbits=0 ;
    for(int i=0 ; i<n ; i++){
        cin >> x ;
        int c=countsetbits(x) ;
        v[c].push_back(x) ;
        maxsetbits=max(maxsetbits,c) ;
    }
   for(int i=0 ; i<=maxsetbits ; i++){
        for(int j=0 ; j<v[i].size() ; j++){
                cout << v[i][j] << ' ' ;
        }
    }
    cout << endl ;
}