#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int t ;
    cin >> t; 
    
    int sh,sm,eh,em,st,et,h,m ;
    while(t--){
        cin >> sh >> sm >> eh >> em ;
        st=sh*60+sm ;
        et=eh*60+em ;
        h=(et-st)/60 ;
        m=et-st-h*60 ;
        cout << h << ' ' << m << endl;
    }
 
}