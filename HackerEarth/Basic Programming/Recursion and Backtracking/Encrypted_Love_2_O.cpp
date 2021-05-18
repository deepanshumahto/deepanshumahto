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

void printmiddle(string s){
    if(s=="")
        return ;
    cout << s[(s.size()-1)/2] ;
    printmiddle(s.substr((((s.size()-1)/2)+1),s.size()-((s.size()-1)/2+1))) ;
    printmiddle(s.substr(0,(s.size()-1)/2)) ;
}

void solve(){
    int n ;
    string s ;
    cin >> n >> s ;
    printmiddle(s) ;
    cout << endl ;
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}