#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
   
}

int main(){

    fastIO() ;
    int n ;
    int count=0 ;
    while(cin >> n){
        
        while(n){
            if(n&1)
                count ++ ;
            n>>=1 ;
        }
    }

    return 0 ;
}