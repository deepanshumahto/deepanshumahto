#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)
 
int main(){
 
    faster
    testcase{
        int n,ce=0,co=0 ;
        cin >> n ;
        ll arr[n] ;
        for(int i=0 ; i<n ; i++){
            cin >> arr[i] ;
            if(arr[i]&1)
                co++ ;
            else
                ce++ ;
        }
        if(ce>co)
            cout << co << endl ;
        else 
            cout << ce << endl ;
    }
 
    return 0 ;
}