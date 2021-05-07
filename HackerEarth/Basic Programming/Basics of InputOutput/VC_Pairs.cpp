#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    long t ;
    cin >> t ;
    while(t--){
        long n , count=0 ;
        
        string s ;
        cin >> n ;
        char ch ;
        for(long i=0 ; i<n ; i++){
            cin >> ch ;
            s.push_back(ch) ;
            if((s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')&&(!(s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='o'||s[i-1]=='i'||s[i-1]=='u'))&&i>0)
            count++ ;
        }
    cout << count << endl ;
    }
 
}