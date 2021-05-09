#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)

void solve(){
    string s ;
    cin >> s ;
    if(s.size()<=10){
        cout << s << endl ;
        return ;
    }
    
    int count=s.size()-2 ;
    cout << s[0] << to_string(count) << s[s.size()-1] << endl ;

}

int main(){

    fastIO() ;
    testcase{
        solve() ;
    }

    return 0 ;
}