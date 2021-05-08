#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

int main(){

    faster
    testcase{
        ll n,c01,c10 ;
        cin >> n >> c01 >> c10 ;
        ll arr[n],arr1[n],arr2[n],sum1=0,sum2=0 ;
        for(ll i=0 ; i<n ; i++){
            cin >> arr[i] ;
            if(i&1){
                arr1[i]=1 ;
                arr2[i]=0 ;
            }
            else{
                arr1[i]=0 ; 
                arr2[i]=1 ;
            }
            if(arr[i]!=arr1[i]){
                if(arr[i]==0){
                    sum1+=c01 ;
                }
                else if(arr[i]==1){
                    sum1+=c10 ;
                }
            }
            if(arr[i]!=arr2[i]){
                if(arr[i]==0){
                    sum2+=c01 ;
                }
                else if(arr[i]==1){
                    sum2+=c10 ;
                }
            }
            
        }
       
        cout << min(sum1,sum2) << endl ;
    }

    return 0 ;
}