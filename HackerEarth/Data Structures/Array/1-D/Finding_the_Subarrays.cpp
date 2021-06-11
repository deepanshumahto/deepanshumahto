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
    int n,count = 0 ;

    cin >> n ; 
    vector<int> arr(n) ;
    double total ;
    for(int i=0 ; i<n ; i++ ){
        cin >> arr[i] ;
        total += arr[i] ;
    }

    vector<pair<int,int>> v ;
    double sum,this_avg,other_avg ;
    for(int i=0 ; i<n ; i++){
        sum=0 ;
        for(int j=i ; j<n ; j++){
            sum += arr[j] ;
            this_avg=sum/(j-i+1) ;
            int sz = n-(j-i+1) ;
            other_avg=(sz>0)?(total-sum)/sz : 0 ; 
            if(this_avg > other_avg){
                v.push_back({i+1,j+1}) ;
                count++ ;
            }
        }
    }
    cout << count << endl ;
    for(auto it : v){
        cout << it.first << ' ' << it.second << endl ;
    }
}

int32_t main(){

    turboBOOST() ;

    solve() ;
    
    return 0 ;
}
