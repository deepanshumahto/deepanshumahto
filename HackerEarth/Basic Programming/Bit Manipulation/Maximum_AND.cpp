#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

int main(){

    faster
    testcase{
        ll a,b ;
        cin >> a >> b ;
        if((b-a)==1){
            cout << (a&b) << endl ;
        }
        else if((b-a)>=2){
            cout << max((b&(b-1)),((b-1)&(b-2))) << endl  ;
        }

    }

    return 0 ;
}