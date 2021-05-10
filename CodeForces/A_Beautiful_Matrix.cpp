#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) 
#define ll long long
#define endl '\n'
#define testcase ll t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
    int arr[5][5],x,y ;
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            cin >> arr[i][j] ;
            if(arr[i][j]){
                x=i;
                y=j ;
            }

        }
    }
    int count=abs(x-2)+abs(y-2) ;
    cout << count ;
}

int main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}