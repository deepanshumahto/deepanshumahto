#include<bits/stdc++.h>
using namespace std ;
 
 
int main(){
 
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        int count=0 ;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='0')
                count+=6 ;
            else if(s[i]=='1')
                count+=2 ;
            else if(s[i]=='2')
                count+=5 ;
            else if(s[i]=='3')
                count+=5 ;
            else if(s[i]=='4')
                count+=4 ;
            else if(s[i]=='5')
                count+=5 ;
            else if(s[i]=='6')
                count+=6 ;
            else if(s[i]=='7')
                count+=3 ;
            else if(s[i]=='8')
                count+=7 ;
            else if(s[i]=='9')
                count+=6 ;
        }
        if(count%2==0){
            for(int i=0 ; i<count/2 ; i++){
                cout << '1' ;
            }
            cout << endl ;
        }
        else{
            for(int i=0 ; i<count/2 ; i++){
                if(i==0)
                    cout << '7' ;
                else{
                    cout << '1' ;
                }
            }
            cout << endl ;
        }
    }
 
}