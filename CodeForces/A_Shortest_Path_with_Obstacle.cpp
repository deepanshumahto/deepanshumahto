#include<bits/stdc++.h>
using namespace std ;
#define ACTIVATEturboBOOST() \
    ios_base::sync_with_stdio(false) ; \
    cin.tie(NULL) ; \
    cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase(t) int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define print(x) cout << x << endl

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
    int x1,y1,x2,y2,x3,y3 ;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3  ;
    int mindist=abs(x2-x1)+abs(y2-y1) ;
    if(((x1==x2)&&(x2==x3)&&((abs(y3-y1)+abs(y3-y2))==abs(y2-y1)))||((y1==y2)&&(y2==y3)&&((abs(x3-x1)+abs(x3-x2))==abs(x2-x1))))
        mindist+=2 ;
    cout << mindist << endl ;
}

int32_t main(){

    ACTIVATEturboBOOST() ;

    testcase(t){
        solve() ;
    }

    return 0 ;
}