#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;
    bool ans=true ;
    for(int i=1 ; i<s.size() ; i++){
        if(s[i]=='H'&&s[i-1]=='H')
            ans=false ;
    }
    if(ans){
        cout << "YES" << endl ;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='H')
                cout << s[i] ;
            else
                cout << 'B' ;
        }
        cout << endl ;
    }    
    else 
        cout << "NO" << endl ;
}