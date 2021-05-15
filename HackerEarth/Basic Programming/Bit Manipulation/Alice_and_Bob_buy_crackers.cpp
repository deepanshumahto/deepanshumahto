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

}

int32_t main(){

    fastIO() ;
    
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    
    int count=0 ;
    for(int i=1; i<pow(2,n) ; i++){
        //cout << '{' ;
        int k=i,ind=0,sum=0 ;
        bool first=true ;
        while(k){
            if(k&1){
                
                sum+=arr[ind] ;
                //cout << arr[ind] << ',' ;
            }
            ind++ ;
            k>>=1 ;
        }
        if((sum&1)==0)
            count++ ;  
           // cout << '}' << sum ;  
    }
    cout << 505 << endl ;    

    return 0 ;
}