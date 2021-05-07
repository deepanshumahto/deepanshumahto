#include<bits/stdc++.h>
using namespace std ;
 
void pattern(int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-1-i ; j++){
            cout << ' ' ;
        }
        for(int j=0 ; j<i+1 ; j++){
            cout << "* " ;
        }
        cout << endl ;
    }
    for(int i=n-2 ; i>=0 ; i--){
        for(int j=0 ; j<n-1-i ; j++){
            cout << ' ' ;
        }
        for(int j=0 ; j<i+1 ; j++){
            cout << "* " ;
        }
        cout << endl ;
    }
}
 
int main(){
 
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        pattern(n) ;
        
    }
}