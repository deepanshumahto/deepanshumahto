#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
    ll y,x ;
	cin >> y ;
	if(y==0)
		x=0 ;
	else{
		int i=1 ;
		while(1){
			if((i^(i>>1))==y){
				x=i ;
				break ;
			}
			i++ ;
		}	
	}	
	cout << x ;	
}

int main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}