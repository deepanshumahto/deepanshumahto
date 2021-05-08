#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

int main(){

    faster
    testcase{
        long long z,n ;
        cin >> z >> n ;
        
        for(long long i=0 ; i<n ; i++){
            long long a ;
            cin >> a ;
            z=z&a  ;
            
        }
        if(!z)    
            cout << "Yes" << endl ;
        else
            cout << "No" << endl ;
    }

    return 0 ;
}