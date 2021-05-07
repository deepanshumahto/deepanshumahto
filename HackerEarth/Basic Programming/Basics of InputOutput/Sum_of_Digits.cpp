#include<iostream>
using namespace std ;

int sum(int n){
    int ans=0;
    while(n>0){
        int digit=n%10 ;
        ans+=digit ;
        n=n/10 ;    
    }
    return ans ;
}

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        cout << sum(n) << endl ;
    }
}