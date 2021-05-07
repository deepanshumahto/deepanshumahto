#include<bits/stdc++.h>
using namespace std ;

int main(){

    int t ;
    cin >> t ;
    while(t--){
        long long n ;
        bool ans=false ;
        cin >> n ;
        while(n>0){
            if(n==1){
                break ;
            }
            if(n%2!=0){
                ans=true ;
                break ;
            }
            n=n/2 ;
        }
        if(ans==true)
            cout << "YES" << endl ;
        else 
            cout << "NO" << endl ;
    }

    return 0 ;
}
