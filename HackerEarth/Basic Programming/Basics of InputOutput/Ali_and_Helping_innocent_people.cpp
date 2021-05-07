#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    string s ;
    cin >> s ;
    bool ans=true ;
    for(int i=1 ; i<s.size() ; i++){
        if(s[i]>'0'&&s[i]<='9'&&s[i-1]>'0'&&s[i-1]<='9'){
            if((s[i-1]+s[i])%2!=0){
                ans=false ;
                cout << "invalid" ;
                return 0 ;
            }
        }
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
            ans=false ;
            cout << "invalid" ;
                return 0 ;
        }
 
    }
    cout << "valid" ;
 
}