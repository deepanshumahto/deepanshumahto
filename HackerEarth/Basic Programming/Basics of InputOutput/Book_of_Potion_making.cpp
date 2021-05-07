#include<bits/stdc++.h>
using namespace std ;
 
int size(long long n){
    int ans=0 ;
    while(n){
        ans++ ;
        n=n/10 ;
    }
    return ans ;
}
 
int main(){
 
    long long s ;
    cin >> s ;
    int sum=0 ;
    
    if(size(s)!=10){
        cout << "Illegal ISBN" ;
        return  0 ;
    }
    for(int i=10 ; i>0 ; i--){
        sum+=(i)*(s%10) ;
        s=s/10 ;
    }
    
    if(sum%11==0){
        cout << "Legal ISBN" ;
 
    }
    else
        cout << "Illegal ISBN" ;
 
 
}