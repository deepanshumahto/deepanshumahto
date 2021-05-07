#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int t ;
    cin >> t ;
    while(t--){
        int green,purple,price1=0,price2=0 ;
        cin >> green >> purple ;
        int players ;
        cin >> players ;
        for(int i=0 ; i<players ; i++){
            int q1,q2 ;
            cin >> q1 >> q2 ;
            if(q1==1){
                price1+=green ;
                price2+=purple ;
            }
            if(q2==1){
                price1+=purple ;
                price2+=green ;
            }
        }
        cout << min(price1,price2) << endl ;
 
    }
 
}