#include<bits/stdc++.h>
using namespace std ;

int main(){

    int t ;
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
    
        bool ans=false ;
        while(n>=2020){
            
            if(n%4041==0||n%2020==0||n%2021==0){
                ans=true ;
                break ;
            }
            else{
                n=n-4041 ;
            }
        }
        if(ans==true)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;
    }
    return 0 ;
}