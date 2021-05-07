#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    string s ;
    cin >> s ;
    int weight=0 ;
    for(int i=0 ; i<s.size() ; i++){
        weight+=(s[i]-'a')+1  ;  
    }
    cout << weight ;
 
}