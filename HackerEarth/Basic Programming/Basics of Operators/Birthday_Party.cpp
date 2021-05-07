#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)
 
int main(){
 
    faster
    testcase{
        int n,m ;
        cin >> n >> m ;
        if(m%n==0&&m!=0)
            cout << "Yes" << endl ;
        else 
            cout << "No" << endl ;
    }
 
    return 0 ;
}