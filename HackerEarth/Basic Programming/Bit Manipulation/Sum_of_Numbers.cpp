#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

int main(){

    faster
    testcase{
        int n,sum ;
        cin >> n ;
        int arr[n] ;
        for(int i=0 ; i<n ; i++){
            cin >> arr[i] ;
        }
        cin >> sum ;
        if(sum==0)
            cout << "YES" << endl ;
        else{
            bool possible=false ;
            for(int i=1 ; i<pow(2,n) ; i++){
                int s=0 ;
                int k=i ;
                int j=0 ;                
                while(k){
                    if(k&1){
                        s+=arr[j] ; 
                    }
                    j++ ;
                    k=k>>1 ;
                }             
                if(s==sum){
                    possible=true ;
                    break ;
                }
            }
            if(possible)
                cout << "YES" << endl ;
            else   
                cout << "NO" << endl ;
        }
    }

    return 0 ;
}