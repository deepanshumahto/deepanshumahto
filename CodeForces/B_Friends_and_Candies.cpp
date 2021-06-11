#include<bits/stdc++.h>
using namespace std ;
#define turboBOOST() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase(t) int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007

void fileIO(){
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
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
    int sum=0 ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
        sum+=arr[i] ;
    }
    if(sum%n!=0){
        cout << -1 << endl ;
        return ;
    }
    int avg=sum/n ;
    int more=0,less=0,balance[n]={0},sumbalance=0 ;
    bool changed=false ;
    for(int i=0 ; i<n ; i++){
        if(arr[i]<avg){
            less++ ;
            balance[i]=arr[i]-avg ;
            sumbalance+=balance[i] ;
            if(sumbalance!=0)
                changed=true ;
        }
        if(arr[i]>avg){
            more++ ;
            balance[i]=arr[i]-avg ;
            sumbalance+=balance[i] ;
            if(sumbalance!=0)
                changed=true ;
        }
    }
    if(sumbalance==0){
        cout << more << endl ;
        return ;
    }
    else{
        cout << -1 << endl ;
        return ;
    }
       
    
}

int32_t main(){

    turboBOOST() ;

    testcase(t){
        solve() ;
    }

    return 0 ;
}