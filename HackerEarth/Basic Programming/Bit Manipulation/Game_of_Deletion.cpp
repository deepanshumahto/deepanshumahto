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
    int arr1[n],arr2[n],reward1,reward2,sum1=0,sum2=0,orr ;
    for(int i=0 ; i<n ; i++){
        cin >> arr1[i] ;
        sum1+=arr1[i] ;
        if(i==0)
            orr=arr1[i] ;
        else    
            orr|=arr1[i] ;
    }
    reward1=sum1-orr ;
    for(int i=0 ; i<n ; i++){
        cin >> arr2[i] ;
        sum2+=arr2[i] ;
        if(i==0)
            orr=arr2[i] ;
        else    
            orr|=arr2[i] ;
    }
    reward2=sum2-orr ;
    if(reward1>reward2){
        cout << 1 << ' ' << reward1-reward2 ;
    }
    else if(reward2>reward1){
        cout << 2 << ' ' << reward2-reward1 ;
    }
    else
        cout << 1 ;

}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}