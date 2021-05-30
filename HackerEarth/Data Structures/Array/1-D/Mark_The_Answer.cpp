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

void solve(){
    int n,maxdiff,diff,count=0 ;
    bool skipped=false ;
    cin >> n >> maxdiff ;
    for(int i=0 ; i<n ; i++){
        cin >> diff ;
        if(diff<=maxdiff){
            count++ ;
        }
        else{
            if(skipped==true){
                cout << count  ;
                return ;
            }
            skipped=true ;
        }

    }
    cout << count ;
    
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}