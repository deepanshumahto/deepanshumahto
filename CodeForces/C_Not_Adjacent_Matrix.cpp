#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

int main(){

    faster
    testcase{
		ll n;
		cin >> n;
		ll s =n*n,x=1,y=2;
		if(n==1)
		cout << 1 << endl ;
		else if(n==2)
		cout << -1 << endl ;
		else{
			for(ll i=0 ; i<n ; i++){
				for(ll j=0 ; j<n ; j++){
					if(x<=s){
						cout << x << ' ' ;
						x+=2;
					}
					else{
						cout << y << ' ' ;
						y+=2;
					}
				}
				cout << endl ;
			}
		}
	}
	return 0;
}