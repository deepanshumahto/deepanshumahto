#include<bits/stdc++.h>
using namespace std ;
 
int x=1000000000+7 ;
int main(){
 
    long long n ;
    cin >> n ;
    long long ans=1 ;
    for(int i=0 ; i<n ; i++){
        int no ;
        cin >> no ;
        ans=(ans*no)%x ;
    }
    cout << ans ;
    
 
 
}