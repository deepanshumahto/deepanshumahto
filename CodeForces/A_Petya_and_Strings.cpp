#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
    string s1,s2 ;
    cin >> s1 >> s2 ;
    
    for(int i=0 ; i<s1.size() ; i++){
        if(tolower(s1[i])-tolower(s2[i])<0){
            cout << -1 ;
            return ;
        }
        else if(tolower(s1[i])-tolower(s2[i])>0){
            cout << 1 ;
            return ;
        }
    }
    cout << 0 ;

}

int main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}