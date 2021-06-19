#include<bits/stdc++.h>
using namespace std ;
#define turboBOOST() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
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
    string s ;
    cin >> s ;
    int balance=0 ;
    map<int,int> m ;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='(')
            balance++ ;
        else    
            balance-- ;
     
        m[balance]++ ;
    }
    cout << (balance==0)*(m.begin()->second) ;
}

int32_t main(){

    turboBOOST() ;

    solve() ;

    return 0 ;
}