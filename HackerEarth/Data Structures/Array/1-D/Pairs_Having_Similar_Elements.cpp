#include<bits/stdc++.h>
using namespace std ;
#define turboBOOST() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase(t) int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007
 
void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
 
int power(int a,int b){
    int ans=1 ;
    if(b==0)
        return ans ;
    while(b){
        if(b&1)
            ans=(ans*a) ;
        
        a=(a*a) ;
        b/=2 ;
    }
    return ans ;
}
 
void solve(){
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    int count=0 ;
    sort(arr,arr+n) ;
    int consecutive=1,equal=1 ;
    for(int i=1 ; i<n ; i++){
        if((arr[i]-arr[i-1])<=1){
            if((arr[i]-arr[i-1])==1)
                consecutive++ ;
            else if((arr[i]-arr[i-1])==0){
                equal++ ;
            }    
        }
        
        if(((arr[i]-arr[i-1])>1) || (i==(n-1))){
            if(consecutive>=2){
                
                consecutive+=(equal-1) ; 
                equal=1 ;   
                count+=((consecutive)*(consecutive-1))/2 ;
                consecutive=1 ;
            }
            else equal=1 ;
        }
    }
    cout << count ;
}

int32_t main(){
 
    turboBOOST() ;
 
    solve() ;
 
    return 0 ;
}