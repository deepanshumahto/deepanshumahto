#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    string s ;
    cin >> s ;
    int n ;
    cin >> n ;
    for(int i=0 ; i<s.size() ; i++){
        int t=n ;
        if(s[i]>='a'&&s[i]<='z'){
            t=n%26 ;
            if(t>'z'-s[i])  
                s[i]='a'+t-('z'-s[i])-1 ;
            else
                s[i]+=t ;
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            t=n%26 ;
            if(t>'Z'-s[i])  
                s[i]='A'+t-('Z'-s[i])-1 ;
            else
                s[i]+=t ;
        }
        else if(s[i]>='0'&&s[i]<='9'){
            t=n%10 ;
            if(t>'9'-s[i])  
                s[i]='0'+t-('9'-s[i])-1 ;
            else
                s[i]+=t ;
        }
        else    
            continue ;
    }
    cout << s ;
 
}