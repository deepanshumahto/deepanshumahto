#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
    ll n,count=0 ;
    char ch ;
    cin >> n ;
    for(int i=0 ; i<n ; i++){
        cin >> ch ;
        if(ch=='0')
            count++ ;
    }
    if(count==n)
        cout << '0' << endl ;
    else
        cout << count << endl ;
}

int main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}