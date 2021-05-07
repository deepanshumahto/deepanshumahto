#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k ; 
        cin >> n >> k ;
        if(n<k) 
            cout << "NO" <<endl ;
        else if(n==k)   
            cout << "YES" <<endl ;
        else{
            long long i=1 ;
            while(i<n){
                i=i*k ;
            }
            if(i==n){
                cout << "YES" << endl ;
            }
            else{
                i/=k ;
                while(i>0){
                    if(i>n);
 
                    else
                        n=n-i ;
                    if(n==0) 
                        break ;
                    i/=k ;
                }
                if(n==0)
                    cout << "YES" << endl ; 
                else 
                    cout << "NO" << endl ;
            }
        }
    }
}