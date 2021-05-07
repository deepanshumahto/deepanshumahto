#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int d , count=0;
    cin >> d ;
    while(d--){
        int r,x ;
        cin >> r >> x ;
        if((100*x)>=((2*22*r)/7))   
            count++ ;
    }
    cout << count << endl ;
 
}