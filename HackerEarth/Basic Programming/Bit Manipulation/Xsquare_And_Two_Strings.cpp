#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve() ;

int main(){
    
    fastIO() ;
    
    testcase{
        solve() ;
    } 

    return 0 ;
}

void solve(){
    string s1,s2 ;
    cin >> s1 >> s2 ;
    ll count1[26]={0},count2[26]={0} ;
    bool yes=false ;
    for(ll i=0 ; i<s1.size() ; i++){
        count1[s1[i]-'a']++ ;
    }
    for(ll i=0 ; i<s2.size() ; i++){
        count2[s2[i]-'a']++ ;
    }
    for(int i=0 ; i<26 ; i++){
        if(count1[i]*count2[i]>0){
            yes=true ;
            break ;
        }
    }
    if(yes)
        cout << "Yes" << endl ;
    else
        cout << "No" << endl ;
    
}