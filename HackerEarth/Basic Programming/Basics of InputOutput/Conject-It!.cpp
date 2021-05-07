#include<bits/stdc++.h>
using namespace std ;
 
bool ispowerof2(int n){
    if(n&(n-1)==0)
        return true ;
     
    return false ;
}
int main(){
 
    int t ;
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        while(!ispowerof2(n)){
            if(n&1){
                n=3*n+1 ;
            }
            else{
                n/=2 ;
            }
        }
        cout << "YES" << endl ;
    }
 
}