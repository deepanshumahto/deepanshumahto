#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int t ;
    cin >> t ;
    while(t--){
        int n,m ;
        string s ;
        cin >> n >> m ;
        cin >> s ;
        bool safe ;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                safe=true ;
                int x=i,y=j ;
                for(int it=0 ; it<s.size() ; it++){
                    if(s[it]=='L')
                        x-- ;
                    else if(s[it]=='R')
                        x++ ;
                    else if(s[it]=='U')
                        y++ ;
                    else if(s[it]=='D')
                        y-- ;
                    if(x<0||x>=m||y<0||y>=n){
                        safe=false ;
                        break ;
                    }
                }
                if(safe==true)
                    goto flag ;
            }
            
        }
        flag:
        if(safe)    
            cout << "safe" << endl ;
        else
            cout << "unsafe" << endl ;
    }
}