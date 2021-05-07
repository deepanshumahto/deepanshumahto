#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int x=0,y=0 ;
    string s ;
    cin >> s ;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='z') 
            x++ ;
        else if(s[i]=='o')
            y++ ;
    }
    if((2*x)==y)
        cout << "Yes" ;
    else 
        cout << "No" ;
 
}
