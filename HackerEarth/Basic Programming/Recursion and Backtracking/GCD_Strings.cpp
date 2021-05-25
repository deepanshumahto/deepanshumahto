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

string gcd(int a,int b){
    string s = "" ;
    if((a%b)==0){
        s+="1" ;
        for(int i=1 ; i<a ; i++){
            s+="0" ;
        }
    }
    else{
        string s1=gcd(b,a%b) ;
        if(a<=s1.size()){
            s+=s1.substr(0,a) ;
        }
        else{
            while(a){
                if(a>s1.size()){
                    s+=s1 ;
                    a-=s1.size() ;
                }
                else{
                    s+=s1.substr(0,a) ;
                    a=0 ;
                }
            }
        }
    }
    return s ;
}

int F(int a,int b){
    string s=gcd(a,b) ;
    int x=0,p=1 ;
    for(int i=s.size()-1 ; i>=0 ; i--){
        
        if(s[i]=='1'){
            x=(x+p%mod)%mod ;
        }
        p<<=1 ;
    }
    return x ;
}


void solve(){
    int a,b ;
    cin >> a >> b ;
    cout << F(a,b) << endl ;
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}