#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)

int main(){

    fastIO() ;
    ll countt=0 ;
    testcase{
        ll a,b,c ;
        ll count0=0 ;
        cin >> a >> b >> c ;
        if(a==0) 
            count0++ ;
        if(b==0) 
            count0++ ;
        if(c==0) 
            count0++ ;
        if(count0<=1)    
            countt++ ;
    }
    cout << countt  ;

    return 0 ;
}