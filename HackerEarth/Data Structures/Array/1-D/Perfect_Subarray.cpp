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

int power(int a,int b,int m){
    int ans=1 ;
    if(b==0)
        return ans ;
    while(b){
        if(b&1)
            ans=(ans*a)%m ;
        
        a=(a*a)%m ;
        b/=2 ;
    }
    return ans ;
}

void solve(){
    int n ;
    cin >> n ;
    int arr[n],sumarr[n]={0} ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
        if(i==0)
            sumarr[i]=arr[i] ;
        else{
            sumarr[i]=sumarr[i-1]+arr[i] ;
        }

    }
    int count=0 ;
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            int sum ;
            if(i==0){
                sum=sumarr[j] ;
            }
            else{
                sum=sumarr[j]-sumarr[i-1] ;
            }
            int sr=sqrt(sum) ;
            if(sr*sr==sum)
                count++ ;
        }
    }
    cout << count ;
}

int32_t main(){

    turboBOOST() ;

    solve() ;
    
    return 0 ;
} 