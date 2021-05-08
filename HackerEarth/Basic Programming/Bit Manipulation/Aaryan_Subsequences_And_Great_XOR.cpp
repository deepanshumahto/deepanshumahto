#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

int main(){

    faster
    int ans,a,n ;
    cin >> n ;
    for(int i=0 ; i<n ; i++){
        cin >> a ;
        if(i==0)
            ans=a ;
        else
            ans|=a ;
    }
    cout << ans ;

    return 0 ;
}