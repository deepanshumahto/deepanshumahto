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

void possiblepoint(vector<vector<int>> &v,int i,int j,int n,int move){
    if(i<1||j<1||i>10||j>10)
        return ;
    
    else{
        if((n==move)){
            v[i-1][j-1]=1 ;
            return ;
        }
        
        possiblepoint(v,i-2,j-1,n+1,move);
	    possiblepoint(v,i-1,j-2,n+1,move);
	    possiblepoint(v,i-2,j+1,n+1,move);
	    possiblepoint(v,i-1,j+2,n+1,move);
	    possiblepoint(v,i+1,j-2,n+1,move);
	    possiblepoint(v,i+2,j-1,n+1,move);
	    possiblepoint(v,i+2,j+1,n+1,move);
	    possiblepoint(v,i+1,j+2,n+1,move);
	    
        return ;
            
    }

}

void solve(){
     vector<vector<int>> v(10) ;
    for(int i=0 ; i<10 ; i++){
        v[i]=vector<int> (10,0) ;
    }

    int i,j,n,count=0 ;
    cin >> i >> j >> n ; 

    possiblepoint(v,i,j,0,n) ;
    
    for(int i=0 ; i<10 ; i++){
        for(int j=0 ; j<10 ; j++){
            if(v[i][j]==1)
                count ++ ;
        }
    }
    cout << count ;
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}