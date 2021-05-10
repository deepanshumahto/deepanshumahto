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
    string s,s1 ;
    cin >> s ;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]!='+')
            s1.push_back(s[i]) ;
    }
    sort(all(s1)) ;
    for(int i=0 ; i<s1.size() ; i++){
        cout << s1[i] ;
        if(i!=(s1.size()-1))
            cout << '+' ;
    }
    
}

int main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}