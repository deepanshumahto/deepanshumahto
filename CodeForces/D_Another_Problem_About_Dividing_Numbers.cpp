#include<bits/stdc++.h>
using namespace std ;
#define turboBOOST() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase(t) int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007
int prime[100001]={0} ;


void fileIO(){
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
}

void sieve(){
    for(int i=2 ; i<=100000 ; i++){
        if(prime[i]==0){
            for(int j=i*i ; j<=100000 ; j+=i){
                prime[j]=1 ;            
            }
        }
    }
}

vector<int> primes(int n){
    vector<int> v ;
    
    for(int i=2 ; i<=n ; i++){
        if(prime[i]==0)
            v.push_back(i) ;
    }
    return v ;
}
vector<int> primenumbers ;

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
    int a,b,k ;
    cin >> a >> b >> k ;
    int mincount ;
    if(a==b)
        mincount=0 ;
    else if((max(a,b)%min(a,b))==0)
        mincount=1 ;
    else    
        mincount=2 ;
    if(k<mincount){
        cout << "NO" << endl ;
        return ;
    }
    
    if(k==1){
        if(mincount==1)
            cout << "YES" << endl ;
        else    
            cout << "NO" << endl ;
        
        return ;
    }
    
    int maxcount=0 ;
    

    for(int i=0 ; i<primenumbers.size() ; i++){
        while((a%primenumbers[i])==0){
            maxcount++ ;
            a/=primenumbers[i] ;
        }
        while((b%primenumbers[i])==0){
            maxcount++ ;
            b/=primenumbers[i] ;
        }
    }
    if(a>1)
        maxcount++ ;
    if(b>1)
        maxcount++ ;
    
    if(k<=maxcount)
        cout << "YES" << endl ;
    else
        cout << "NO" << endl ;
}

int32_t main(){

    turboBOOST() ;

    sieve() ;
    primenumbers=primes(100000) ;
    
    testcase(t){
        solve() ;
    }

    return 0 ;
}