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

int countsetbits(int n){
    int count=0 ;
    while(n){
        n=n&(n-1) ;
        count++ ;
    }
    return count ;
}

int totalbits(int n){
    return (int)floor(log2(n))+1 ;
}

void solve(){
     
}

int32_t main(){

    fastIO() ;
    
    int arr[627510],a=1 ;
    for(int i=1 ; i<627510 ; i++){
        while(__gcd(countsetbits(a),totalbits(a)-countsetbits(a))!=1){
            a++ ;
        }
        arr[i]=a ;
        a++ ;
    }
    
    testcase{
        int n ;
        cin >> n ;
        cout << arr[n] << endl ;
    }

    return 0 ;
}