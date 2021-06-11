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
    int posmax=0,posmin=0 ;

    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
        if(arr[i]>arr[posmax])
            posmax=i ;
        if(arr[i]<arr[posmin])
            posmin=i ;
    }
    int count1,count2,count3,count4 ;
    count1=(posmax+1)+(n-posmin) ;
    count2=(posmin+1)+(n-posmax) ;
    count3=max(posmin+1,posmax+1) ;
    count4=max((n-posmax),(n-posmin)) ;

    cout << min(min(count1,count2),min(count3,count4)) << endl ;

}

int32_t main(){

    turboBOOST() ;

    testcase(t){
        solve() ;
    }

    return 0 ;
}