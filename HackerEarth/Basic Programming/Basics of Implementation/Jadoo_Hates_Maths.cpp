#include<bits/stdc++.h>
using namespace std ;
 
bool ans(int n){
    if(n%3==0)
        return false ;
    while(n){
        if(n%10==3)
            return false ;
        n/=10 ;
    }
    return true ;
}
int main(){
 
    int n ;
    cin >> n ;
    for(int i=n+1 ;i<=254 ; i++){
        if(ans(i)){
            cout << i ;
            return 0 ;
        }
    }
 
}
