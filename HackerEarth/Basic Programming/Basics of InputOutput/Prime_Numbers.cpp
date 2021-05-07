#include<bits/stdc++.h>
using namespace std ;
 
bool checkPrime(long long n){
    for(int i=2 ; i<=sqrt(n) ; i++){
        if(n%i==0)
            return false ;
    }
    return true ;
}
 
int main(){
    int t ;
    cin >> t ;
    
    while(t--){
        long long n ;
        cin >> n ;
        if(checkPrime(n))
            printf("YES\n") ;
        else
            printf("NO\n") ;
    }
}