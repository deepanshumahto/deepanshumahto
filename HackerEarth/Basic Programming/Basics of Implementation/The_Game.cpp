#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)
 
int main(){
 
    faster
    testcase{
        int n,a,b ;
        cin >> n >> a >> b ;
        int arr[n] ;
        int rio=0,tokyo=0 ;
        for(int i=0 ; i<n ; i++){
            cin >> arr[i] ;
        }
        sort(arr,arr+n) ;
        int cr=1,ct=0 ;
        char winner='n' ;
        while(winner=='n'){
            if(cr){
                int i,both=-1 ;
                for(i=n-1 ; i>=0 ; i--){
                    if(arr[i]==-1)
                        continue ;
                    if(arr[i]%a==0&&arr[i]%b==0){
                        both=0 ;
                        arr[i]=-1 ;
                        break ;
                    }
                    if(both==-1&&arr[i]%a==0){
                        arr[i]=-1 ;
                        break ;
                    }
 
                }
                if(i==-1){
                    winner='t' ;
                }
                cr=0 ;
                ct=1 ;
            }
            else if(ct){
                int i,both=-1 ;
                for(i=n-1 ; i>=0 ; i--){
                    if(arr[i]==-1)
                        continue ;
                    if(arr[i]%a==0&&arr[i]%b==0){
                        both=0 ;
                        arr[i]=-1 ;
                        break ;
                    }
                    if(both==-1&&arr[i]%b==0){
                        arr[i]=-1 ;
                        break ;
                    }
 
                }
                if(i==-1){
                    winner='r' ;
                }
                cr=1 ;
                ct=0 ;
            }
        }
        if(winner=='r'){
            cout << "Rio" << endl ;
        }
        else if(winner=='t'){
            cout << "Tokyo" << endl ;
        }
    }
 
    return 0 ;
}