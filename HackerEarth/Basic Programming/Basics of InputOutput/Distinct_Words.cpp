#include<iostream>
using namespace std ;
 
 
int main(){
    
    long long arr[100000]={1} ;
    for(int i=1 ; i<=100000 ; i++){
        arr[i]=(arr[i-1]*i)%1000000007 ;
    }
    long long t ;
    cin>>t ;
    while(t--){
        long long n ;
        cin>>n ;
        cout << arr[n] << endl ;
 
    }
}