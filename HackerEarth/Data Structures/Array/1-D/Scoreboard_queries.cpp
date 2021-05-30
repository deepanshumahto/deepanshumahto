#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase(t) int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
    int size,q ;
    cin >> size >> q ;
    vector<int> arr(size) ;
    map<int,int> mp ;
    for(int i=0 ; i<size ; i++){
       cin >> arr[i] ;
       mp[arr[i]]++ ;
    }
    
    while(q--){
        int l,r ; 
    	cin >> l >> r ;
 
    	if(mp[arr[l-1]]==1)
    		mp.erase(arr[l-1]) ;
    	else
    		mp[arr[l-1]] -= 1 ;
     	
        arr[l-1]=r ;
    	mp[arr[l-1]]++ ;
    	
        cout << mp.size()+1 << endl ;
    }
}

int32_t main(){

    fastIO() ;
    
    testcase(t){
        solve() ;
    }

    return 0 ;
}