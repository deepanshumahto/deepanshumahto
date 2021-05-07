#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main(){
    int t ;
    cin >> t ;
    long long x=pow(10,9)+7 ;
    long long arr[100001] ;
    arr[0]=0%x ;
    arr[1]=1%x ;
    for(int i=2 ; i<100001 ; i++)
        arr[i]=(arr[i-1]+arr[i-2])%x ;
    
    while(t--){
        long long n ;
        cin >> n;
    
        cout << arr[n] << endl ;
    }
}