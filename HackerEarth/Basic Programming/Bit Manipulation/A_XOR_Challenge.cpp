#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

int countBits(int n){
    return (int)log2(n)+1 ;
}

bool isSet(int n,int pos){
    if(n&(1<<(pos-1)))
        return true ;
    else 
        return false ;
}

int setBit(int n,int pos){
    return n|(1<<(pos-1)) ;
}
int main(){

    faster
    int n ;
    cin >> n ;
    ll a=0,b=0 ;
    for(int i=1 ; i<=countBits(n) ; i++){
        if(isSet(n,i)){
            if(i==countBits(n))
                a=setBit(a,i) ;
            else
                b=setBit(b,i) ;
        }
        else{
            a=setBit(a,i) ;
            b=setBit(b,i) ;
        }
    }
    cout << a*b ;
    return 0 ;
}