#include<bits/stdc++.h>
using namespace std ;
 
int main(){
      int t ;
      cin >> t ;
      while(t--){
            long long n,k ;
            cin >> n >> k ;
            long long day=1,total=1 ;
            if(n>=k){
                  for(int i=0 ; total<k ; i++){
                        total*=2 ;
                        day++ ;
                  }
                  cout << day << endl ;
            }
            else{
                  for(int i=0 ; total<n ; i++){
                        total*=2 ;
                        day++ ;
                  }
                  day=day*(k/n)+1 ;
                  total=1 ;
                  for(int i=0 ; total<(k%n) ; i++){
                        total*=2 ;
                        day++ ;
                  }
                  cout << day << endl ;
            }
      }
 
    return 0 ;
}