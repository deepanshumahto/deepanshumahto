#include<bits/stdc++.h>
using namespace std ;
 
int bf(long long n){
    int sum=0 ;
    while(n){
        sum+=n%10 ;
        n/=10 ;
    }
    if(sum>0&&sum<10)
        return sum ;
    else 
        return bf(sum) ;
}
 
int check(long long n){
    int arr[10]={0} ;
    while(n){
        if(n%10==0)
            return 0 ;
        arr[n%10]++ ;
        if(arr[n%10]>1)
            return 0 ;
        n/=10 ;
    }
    return 1 ;
}
 
int main(){
 
    int b,k ;
    cin >> b >> k ;
    if(k<=8){
        for(long long i=pow(10,k-1) ; i<pow(10,k) ; i++){
           if(b==bf(i)&&check(i)==1){
                cout << i ;
                return 0 ;
            } 
        }      
        cout << -1 ;
    }
    else
        cout << -1 ;
 
}