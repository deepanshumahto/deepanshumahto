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
    int a=1000000 ;
    int arr[a+1]={0} ;
    int n ;
    cin >> n ;
    int l, r ;

    int sum=0;

    while(n--){
        cin >> l >> r ;
        arr[l]+=1 ;
        arr[r+1]-=1 ; 
    }

    for(int i=1 ; i<=a ; i++){
        arr[i]+=arr[i-1] ;
    }
 
    for(int i=1 ; i<=a ; i++){
        if(arr[i]==0)
            sum+=i ;
    }

    cout << sum << endl ;
}


    

 
int32_t main(){
 
    turboBOOST() ;
 
    solve() ;
 
    return 0 ;
}