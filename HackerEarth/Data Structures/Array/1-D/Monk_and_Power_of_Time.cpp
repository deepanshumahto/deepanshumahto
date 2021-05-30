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
    int n ;
    cin >> n ;
    queue<int> co,io ;
    int time=0 ;
    for(int i=0 ; i<n ; i++){
        int x ;
        cin >> x ;
        co.push(x) ;
    }
    for(int i=0 ; i<n ; i++){
        int x ;
        cin >> x ;
        io.push(x) ;
    }
    while(!co.empty()){
        if(co.front()!=io.front()){
            int x=co.front() ;
            co.pop() ;
            co.push(x) ;
            time++ ;
        }
        else{
            co.pop() ;
            io.pop() ;
            time++ ;
        }

    }

    cout << time ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}