#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)

int binarytoint(string s){
    int ans=0 ;
    for(int i=0 ; i<16 ; i++){
        if(s[i]=='1'){
            ans+=pow(2,15-i) ;
        }
    }
    return ans ;
}

int main(){

    faster
    testcase{
        int n,m ;
        char ch ;
        cin >> n >> m >> ch ;
        string binary ; 
        int a=pow(2,15) ;
        while(a){
            if(n>=a){
                binary.push_back('1') ;
                n=n-a ;
            }
            else    
                binary.push_back('0') ;
            a=a/2 ;
        }
        string ans ;
        if(ch=='L'){
            ans=binary.substr(m,16-m)+binary.substr(0,m) ;
        }
        else if(ch=='R'){
            ans=binary.substr(16-m,m)+binary.substr(0,16-m) ;
        }
        cout << binarytoint(ans) << endl ;
    }

    return 0 ;
}