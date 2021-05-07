#include<bits/stdc++.h>
using namespace std ;
 
int opposite(int n){
    if(n==1)    
        return 12 ;
    else if(n==2)
        return 11 ;
    else if(n==3)
        return 10 ;
    else if(n==4)
        return 9 ;
    else if(n==5)
        return 8 ;
    else if(n==6)
        return 7 ;
    else if(n==7)
        return 6 ;
    else if(n==8)
        return 5 ;
    else if(n==9)
        return 4 ;
    else if(n==10)
        return 3 ;
    else if(n==11)
        return 2 ;
    else if(n==12)
        return 1 ;
}
 
int main(){
 
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        int r=n%12,opp ;
        
        if(r==0)
            opp=n-11 ;
        else
            opp=n+(opposite(r)-r) ;
        string s ;
        if(abs(opp-n)==1||abs(opp-n)==11)   
            s="WS" ;
        else if(abs(opp-n)==3||abs(opp-n)==9)
            s="MS" ;
        else if(abs(opp-n)==5||abs(opp-n)==7)
            s="AS" ;
        cout << opp << ' ' << s  << endl ;
    
    }
 
}