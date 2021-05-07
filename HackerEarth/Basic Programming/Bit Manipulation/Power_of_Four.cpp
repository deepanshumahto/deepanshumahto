#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

bool check(int n){
    int i=1 ;
    while(i<=n){
        i=i*4 ;
    }
    i=i/4 ;
    if(i==n)
        return true ;
    while(i){
        n=n-i ;
        i=i/4 ;
        while(i>n){
            i=i/4 ;
        }
    }
    if(n==0)
        return true ;
    else 
        return false ;
}

int main(){

    faster
    testcase{
        int n ;
        cin >> n ; 
        while(check(n)==false){
            n++ ;
        }
        cout << n << endl ;

    }

    return 0 ;
}