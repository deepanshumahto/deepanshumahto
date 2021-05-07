#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int t ;
    cin >> t ;
    while(t--){
        int startx=0,starty=0,x,y,count=0 ;
        cin >> x >> y ;
        if(y>x||x<0||y<0){
            cout << -1 << endl ;
        }
        else{
            while(starty!=y){
                startx++ ; starty++ ;
                count++ ;
            }
            while(x!=startx){
                startx++ ;
                count++ ;
            }
            cout << count << endl ; 
        }
        
            
    }
 
}