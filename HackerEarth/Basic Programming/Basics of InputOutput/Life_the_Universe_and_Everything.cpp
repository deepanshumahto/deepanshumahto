#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int n ;
       
    vector<int> v ;
    do{
        cin >> n ;
        v.push_back(n) ;        
    } while(n!=42) ;
    //sort(v.begin(),v.end()-1) ;
    for(int i=0 ; i<v.size()-1 ; i++){
        cout << v[i] << endl ;
    }
 
}