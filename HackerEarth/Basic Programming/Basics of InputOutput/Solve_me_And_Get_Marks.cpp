#include <bits/stdc++.h>
using namespace std ;
 
int main(){
    long long n,k;
    scanf("%lld%lld",&n,&k) ;
    long long marks[100000] ;
    
    for(long long i=0 ; i<n ; i++){
        scanf("%lld",&marks[i]) ;        
    }
    sort(marks,marks+n) ;
    long long w=0 ;
    if(abs(marks[0]-marks[1])<=k)
        w++ ;
    if(abs(marks[n-1]-marks[n-2])<=k)
        w++ ;
    
    for(long long i=1 ; i<n-1 ; i++){
        if(abs(marks[i]-marks[i-1])<=k||abs(marks[i]-marks[i+1])<=k)            w++ ;
        
    }
    
    
    cout << w << " students need to worry!" << endl;
    cout << n-w << " students should relax!" << endl;
 
    
 
}