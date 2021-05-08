#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

int main(){

    faster ;
    
    testcase{
        int l ;
        cin >> l ;
        string s ;
        cin >> s ;
        bool suspicious=false ;
        for(int i=1 ; i<l ; i++){
            if(s[i]!=s[i-1]){
                for(int j=i-2 ; j>=0 ; j--){
                    if(s[i]==s[j]){
                        suspicious=true ;
                    }
                }
            }
        }
        if(suspicious)
            cout << "NO" << endl ;
        else 
            cout << "YES" << endl ;
    }

    return 0 ;
}
