#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void winner(vector<int> &v,int i,int itri,string s){
    if(v.size()==1)
        return ;
    if(s[i]=='y'){
        v.erase(v.begin()+itri%v.size()) ;
        i=(i+1)%s.size() ;
        winner(v,i,itri%v.size(),s) ;
    }
    else{
        i=(i+1)%s.size() ;
        itri=(itri+1)%v.size() ; 
        winner(v,i,itri,s) ;
    }
}   

void solve(){
    int n ;
    string s ;
    cin >> n >> s ;
    vector<int> v ;
    vector<int> ::iterator it=v.begin() ;
    int i=0 ;
    for(int i=1 ; i<=n ; i++){
        v.push_back(i) ;
    }
    
    winner(v,0,0,s) ;
    cout << v[0] ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}