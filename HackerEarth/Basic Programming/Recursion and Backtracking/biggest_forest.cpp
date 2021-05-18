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

int forest(vector<vector<char>> &v,int size,int x,int y){
    if(x>=size||x<0||y>=size||y<0||v[x][y]!='T')
        return 0 ;
    
    v[x][y]='X' ;
    return (1+forest(v,size,x+1,y)+forest(v,size,x-1,y)+forest(v,size,x,y-1)+forest(v,size,x,y+1)) ;
    
}

void solve(){   
    int n ;
    cin >> n ;
    vector<vector<char>> v(n) ; 
    
    for(int i=0 ; i<n ; i++){
        v[i]=vector<char> (n) ;
        for(int j=0 ; j<n ; j++){
            cin >> v[i][j] ;
        }
    }
    int ans=-1 ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            ans=max(ans,forest(v,n,i,j)) ;
        }
    }
    cout << ans ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}