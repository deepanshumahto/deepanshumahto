#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int t ;
    cin >> t ;
    int a=0,b=7 ;
    while(t--){
        int n ;
        cin >> n ;
        if(abs(b-n)<abs(a-n)){
            cout << 'B' << endl ;
            b=n ;
        }   
        else if(abs(b-n)>abs(a-n)){
            cout << 'A' << endl ;
            a=n ;
        }
        else{
            if(b<a){
                cout << 'B' << endl ;
                b=n ;
            }
            else{
                cout << 'A' << endl ;
                a=n ;
            }    
        }
    }
 
}