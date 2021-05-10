#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){

    int n,x=0 ;
    cin >> n ;
    for(int i=0 ; i<n ; i++){
        string s ;
        cin >> s ;
        if(s[1]=='+')
            x++ ;
        else    
            x-- ;
    }
    cout << x ;
}

int main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}