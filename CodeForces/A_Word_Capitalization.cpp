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
    string s ;
    cin >> s ;
    for(int i=0 ; i<s.size() ;i++){
        if(i==0)
            cout << (char)toupper(s[i]) ;
        else 
            cout << s[i] ;
    }
}

int main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}