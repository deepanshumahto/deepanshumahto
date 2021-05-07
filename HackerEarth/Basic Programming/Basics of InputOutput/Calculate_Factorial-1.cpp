#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ; 
    cin >> t ;
    long long x=pow(10,9)+7 ;

    long long fac[50001]={1} ;
    for(int i=1 ; i<50001 ; i++){
        fac[i]=(i*fac[i-1])%x ;
    }
    
    while(t--){
        int n ;
        cin >> n ;
        cout << fac[n] << endl ;

    }
}