#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int t ;
    cin >> t ;
    while(t--){
        string s1 , s2 ;
        int a1[26]={0},a2[26]={0} ;
        cin >> s1 >> s2 ;
        if(s1.size()!=s2.size())
            cout << "NO" << endl ;
        else{
            bool ans=true ;
            for(int i=0 ; i<s1.size() ; i++){
                a1[s1[i]-'a']++ ;
                a2[s2[i]-'a']++ ;
            }
            for(int i=0 ; i<26 ; i++){
                if(a1[i]!=a2[i]){
                    ans=false ;
                    break ;
                }
            }
            if(ans)
                cout << "YES" << endl ;
            else
                cout << "NO" << endl ;
        }
    }
 
}