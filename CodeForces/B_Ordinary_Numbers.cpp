#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

ll countn(ll n){
    
    if(n>=1&&n<=9)
        return n ;
    ll count=9 ;
    ll i=10 ;
    while((i*10)<=n){
        i*=10 ;
        count+=9 ;
    }
    
    int k=i/10 ;
    while(k){
        i+=k ;
        k=k/10 ;
    }
    k=i ;
    while(i<=n){
        count++ ;
        i+=k ;
    }
    return count ;
}

int main(){

    faster
    
    testcase{
        ll n ;
        cin >> n ;
        cout << countn(n) << endl ;
    }

    return 0 ;
}