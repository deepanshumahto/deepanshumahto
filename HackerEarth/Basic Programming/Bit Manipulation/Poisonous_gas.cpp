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

bool ispowerof2(int n){
    if((n&(n-1))==0)
        return true ;
    return false ;
}

void solve(){
    int n ;
    cin >> n ;
    int arr[n],sum=0 ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
        sum+=arr[i] ;
    }
    //cout << sum << ' ' ;
    if(sum<1){
        cout << "No" << endl ;
        return ;
    }
    else{
        if(ispowerof2(sum))
            cout << "Yes" << endl ;
        else   
            cout << "No" << endl ;
    }
}

int32_t main(){

    fastIO() ;
    
    testcase{
        solve() ;
    }

    return 0 ;
}