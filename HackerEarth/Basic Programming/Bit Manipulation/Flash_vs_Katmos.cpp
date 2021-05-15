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

int countsetbits(int n){
    int count=0 ; 
    while(n){
        if(n&1)
            count++ ;
        n>>=1 ;
    }
    return count ;
}
void solve(){
    int n ;
    cin >> n ;
    int arr[n] ;
    vector<pair<int,int>> v ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
        v.push_back(make_pair(countsetbits(arr[i]),i)) ;
    }
    sort(all(v)) ;
    
    for(int i=0 ; i<v.size() ; i++){
        cout << arr[v[i].second] << ' ' ;
    }
    cout << endl ;

}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}