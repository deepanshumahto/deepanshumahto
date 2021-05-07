#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        bool allsame=true ;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]!=s[0]){
                allsame=false ;
                break ;
            }
        }
        if(allsame) 
        cout << -1 << endl ;
        else{
            sort(s.begin(),s.end()) ;
            cout << s << endl ;
        }
    }
 
}