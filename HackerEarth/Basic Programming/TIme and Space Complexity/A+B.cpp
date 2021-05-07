#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    
    while(1){
        string s1,s2 ;
        cin >> s1 >> s2 ;
        if(s1=="")
            return 0 ;
        reverse(s1.begin(),s1.end()) ;
        reverse(s2.begin(),s2.end()) ;
 
        if(s2.size()>s1.size()){
            string temp=s1 ;
            s1=s2 ;
            s2=temp ;
        }
 
            for(int i=0 ; i<s2.size() ; i++){
                int a=s2[i]-'0' ;
                while(a--){
                    
                    if(s1[i]=='9'){
                        
                        s1[i]='0' ;
                        if(i==(s1.size()-1)){
                            s1.push_back('1') ;
                        }
                        else{
                            int b=i ;
                            while(s1[b+1]=='9'&&((b+1)<s1.size())){
                                s1[b+1]='0' ;
                                b++ ;
                            }
                            if(b==(s1.size()-1))
                                s1.push_back('1') ;
                            else    
                                s1[b+1]++ ;
                        }
                            
                    }
                    
                    else{
                        s1[i]++ ;
                    }
                }
            }
        reverse(s1.begin(),s1.end()) ;
        cout << s1 << endl ;
        
    }
 
    return 0 ;
}