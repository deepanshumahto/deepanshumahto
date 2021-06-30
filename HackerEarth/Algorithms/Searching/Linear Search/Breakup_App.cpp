#include<bits/stdc++.h>
using namespace std ;
#define turboBOOST() \
    ios_base::sync_with_stdio(false) ; \
    cin.tie(NULL) ; \
    cout.tie(NULL) 
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
    int n ;
    cin >> n ;
    int w19=0,w21=0 ;
    for(int j=0 ; j<n ; j++){
        string s ;
        getline(cin,s) ;
        if(s[0]=='G'){
            for(int i=3 ; i<=s.size()-1 ; i++){
                if(s.substr(i,2)=="19")
                    w19+=2 ;
                else if(s.substr(i,2)=="21")
                    w21+=2 ;
            }
        }
        else if(s[0]=='M'){
            for(int i=3 ; i<=s.size()-1 ; i++){
                if(s.substr(i,2)=="19")
                    w19++ ;
                else if(s.substr(i,2)=="21")
                    w21++ ;
            }
        }
    }
    if(w19>w21)
        cout << "Date" ;
    else    
        cout << "No Date" ;

}

int32_t main(){

    turboBOOST() ;

    
    solve() ;


    return 0 ;
}