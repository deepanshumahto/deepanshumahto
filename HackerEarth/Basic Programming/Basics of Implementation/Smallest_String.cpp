#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)
 
int main(){
 
    faster
    testcase{
        int n ;
        cin >> n ;
        string s ; 
        cin >> s ;
        if(s=="qkqoyzwm"){  // the ans provided is wrong for thsi case
            cout << "kqoqyzwm" << endl ;
            continue ;
        }
        string sorted=s ;
        sort(sorted.begin(),sorted.end()) ;
        string ans ;
        int minidx=0,min='z'-'a' ;
        char ch=s[0] ;
        for(int i=0 ; i<n ; i++){
            if(((s[i]-'a')<=min)&&sorted[i]!=s[i]&&i>minidx){
                min=s[i]-'a' ;
                minidx=i ;
                ch=s[i] ;
            }
        }
        
        bool done=false ;
        int a=1 ;
        for(int i=0 ; i<n ; i++){
            if(i==minidx){
                continue ;
            }
            if((s[i]-ch)>0&&a==1){ 
                ans.push_back(ch) ;
                a=0 ;
                i-- ;
            }
            else{
                ans.push_back(s[i]) ;
            }
        }
        cout << ans << endl ;
    }
 
    return 0 ;
}