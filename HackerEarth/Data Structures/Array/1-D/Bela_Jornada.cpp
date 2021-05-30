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

    int n,sum=0,ct=0;
    cin >> n ;

    vector<int> v ;

    for(int i=0 ; i<n ; i++){
        int x ;
        cin>>x ;
        v.push_back(x) ;
        sum+=x ;
    }

    int max=0 ;

    for(auto it : v){
        ct+=it ;
        sum-=it ;
        if(ct*sum>max) 
            max=ct*sum ;
    } 

    cout << max << endl ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}