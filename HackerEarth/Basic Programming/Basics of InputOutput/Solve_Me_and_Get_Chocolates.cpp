#include<bits/stdc++.h>
using namespace std ;
 
int main(){
    long long my,k ;
    cin >> my >> k ;
    
    long long arr[my] ;
    for(int i=0 ; i<my ; i++){
        cin >> arr[i] ;
    }
    
    sort(arr,arr+my) ;
    long long sum=0 ;
    int i=1 , iter=0,count=0;
    while(count<k){
        if(i==arr[iter]){
            iter++ ;
            i++ ;
            if(arr[iter-1]==arr[iter])
                i-- ;
        }
        else{
            sum+=i ;
            i++ ;
            count++ ;
        }
    }
    cout << sum ;
}