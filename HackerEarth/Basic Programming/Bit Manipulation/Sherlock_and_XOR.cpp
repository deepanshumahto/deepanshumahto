#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

int main(){

    faster
    testcase{
        ll n,counte=0,counto=0 ;
        cin >> n ;
        ll arr[n] ;
        for(ll i=0 ; i<n ; i++){
            cin >> arr[i] ;
            if(arr[i]&1)
                counto++ ;
            else 
                counte++ ;
        }
        
        cout << counte*counto << endl ;
    }

    return 0 ;
}
