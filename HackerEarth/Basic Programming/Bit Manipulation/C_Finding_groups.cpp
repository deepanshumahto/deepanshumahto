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
    
    int n,q ;
    cin >> n >> q ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    map<int,int> m ;
    int strength ;
    for(int i=1; i<pow(2,n) ; i++){
        //cout << '{' ;
        int k=i,ind=0 ;
        bool first=true ;
        while(k){
            if(k&1){
                if(first){
                    strength=arr[ind] ;
                    first=false ;
                }
                else{
                    strength|=arr[ind] ;
                }
                //cout << arr[ind] << ',' ;
            }
            ind++ ;
            k>>=1 ;
        }
        //cout << '}' << strength ;
        m[strength]++ ;
            
    }
    while(q--){
        int x,count=0 ;
        cin >> x ;
        for(auto i:m){
            if(i.first>=x)
                count+=i.second ;
        }
        cout << count << endl ;
    }

    return 0 ;
}