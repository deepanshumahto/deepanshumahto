#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    long long size,q ;
    scanf("%lld%lld",&size,&q)  ;
    long long arr[size] ;
    for(long long i=0 ; i<size ; i++){
        scanf("%lld",&arr[i]) ;
        if(i>0)
            arr[i]=arr[i]+arr[i-1] ;
    }
    while(q--){
        long long l,r, mean=0 ;
        scanf("%lld%lld",&l,&r) ;
        
        if(l==1)
            mean=arr[r-1]/(r-l+1) ;
        else
            mean=(arr[r-1]-arr[l-2])/(r-l+1) ;
   
        printf("%lld\n",mean) ;
    }
 
}