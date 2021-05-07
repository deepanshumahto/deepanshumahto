#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    long n,sum=0 ;
    cin >> n ;
    
    long arr[n] ;
    
    for(long i=0 ; i<n ; i++){
    
        cin >> arr[i] ;
        sum+=arr[i] ;
    }
    
    long ans=-1,min=1000000000 ;
    
    for(int i=0 ; i<n ; i++){
    
        if((sum-arr[i])%7==0){
            
            if(arr[i]<min){
                min=arr[i] ;
                ans=i ;
            }
        }
    }
    
    cout << ans ;
 
}