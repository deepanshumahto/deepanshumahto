#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)
 
int countBits(ll n){
    return (int)log2(n)+1 ;
}
ll count(ll x) {
    ll t ;
    for (t=1; t*t <= x; t*=2);    
    if (x/t>=t/2)
        return x-x/t;
    else 
        return x-t/2+1;
    
}
 
int main(){
 
    faster
    testcase{
        ll n ;
        cin >> n ;        
        cout << count(n) << endl ;
    }
    return 0 ;
}