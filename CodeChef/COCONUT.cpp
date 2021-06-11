#include<bits/stdc++.h>
using namespace std ;
#define turboBOOST() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase(t) int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
    int xa,xb,Xa,Xb,a,b ;
    cin >> xa >> xb >> Xa >> Xb ;
    if((Xa%xa)!=0)
        a=Xa/xa+1 ;
    else
        a=Xa/xa ;
    
    if((Xb%xb)!=0)
        b=Xb/xb+1 ;
    else
        b=Xb/xb ;

    cout << a+b << endl ;
        
}

int32_t main(){

    turboBOOST() ;

    testcase(t){
        solve() ;
    }
    
    return 0 ;
} 