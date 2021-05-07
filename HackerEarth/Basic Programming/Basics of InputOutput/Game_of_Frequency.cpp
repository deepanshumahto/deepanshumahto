#include<iostream>
 
using namespace std ;
 
int main(){
 
    long long q ;
    string s ;
    long long a[26]={0} ;
    long long A[26]={0} ;
    long long n[10]={0} ;
    getline(cin,s) ;
    cin >> q ;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i]>='a'&&s[i]<='z')
            a[s[i]-'a']++ ;
        else if(s[i]>='A'&&s[i]<='Z')
            A[s[i]-'A']++ ;
        else if(s[i]>='0'&&s[i]<='9')
            n[s[i]-'0']++ ;
    }
    while(q--){
        char c ;
        cin >> c ;
        if(c>='a'&&c<='z')
            cout << a[c-'a'] << endl ;
        else if(c>='A'&&c<='Z')
            cout << A[c-'A'] << endl ;
        else if(c>='0'&&c<='9')
            cout << n[c-'0'] << endl ;
        
 
    }
}