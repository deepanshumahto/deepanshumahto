#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        int v[5]={0},V[5]={0} ;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='a')
                v[0]++ ;
            else if(s[i]=='A')
                V[0]++ ;
            else if(s[i]=='e')
                v[1]++ ;   
            else if(s[i]=='E')
                V[1]++ ;   
            else if(s[i]=='i')
                v[2]++ ;   
            else if(s[i]=='I')
                V[2]++ ;   
            else if(s[i]=='o')
                v[3]++ ;   
            else if(s[i]=='O')
                V[3]++ ;   
            else if(s[i]=='u')
                v[4]++ ;   
            else if(s[i]=='U')
                V[4]++ ;   
        }
        if((v[0]>0&&v[1]>0&&v[2]>0&&v[3]>0&&v[4]>0)||(V[0]>0&&V[1]>0&&V[2]>0&&V[3]>0&&V[4]>0))
        cout << "lovely string" << endl ;
        else
        cout << "ugly string" << endl ; 
    }
 
}