#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int n,skill ; 
    cin >> n >> skill ;
    while(n--){
        int cskill ;
        cin >> cskill ;
        if(cskill>=skill)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;
    }
    
 
}