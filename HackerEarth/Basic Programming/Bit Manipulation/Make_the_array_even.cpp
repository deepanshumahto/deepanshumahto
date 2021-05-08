#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

int main(){

    faster
    testcase{
        int n ;
        cin >> n ;
        int arr[n],count=0,tempcount=0 ;
        for(int i=0 ; i<n ; i++){
            cin >> arr[i] ;
        }
        for(int i=0 ; i<n ; i++){
            
            if(arr[i]&1){
                tempcount++ ;
                if(tempcount==2){
                    count+=1 ;
                    tempcount=0 ;
                }
                if(i==n-1&&tempcount==1){
                    count+=2 ;
                }
            }
            else if((!(arr[i]&1))&&tempcount==1){
                count+=2 ;
                tempcount=0 ;
            }
        }
        
        cout << count << endl ;
    }

    return 0 ;
}