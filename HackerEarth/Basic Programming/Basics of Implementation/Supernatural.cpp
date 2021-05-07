#include<bits/stdc++.h>
using namespace std ;
 
int pd(int n){
    int a=1 ;
    while(n){
        if(n%10==0)
            return 0 ;
        a=a*(n%10) ;
        n/=10 ;
    }
    return a ;
}
 
int if1(int n){
    while(n){
        if(n%10==1)
            return 1 ;
        n/=10 ;
    }
    return 0 ;
}
int main(){
 
    int n,count=0 ;
    cin >> n ;
    
    for(int i=1 ; i<1000000 ; i++){        
        if((n==pd(i))&&(if1(i)==0)){
            count++ ;
            //cout << i << ' ' ;
        }
    }
    cout << endl << count ;
}