#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int n ;
    cin >> n ;
    int i=1 ;
    while(n>=i*3){
        n=n-i*3 ;
        i++ ;
    }
    if(n>=i)
        cout << "Motu" ;
    else
        cout << "Patlu" ;
 
}