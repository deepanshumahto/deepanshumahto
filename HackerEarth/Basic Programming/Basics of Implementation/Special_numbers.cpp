#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long
 
void numbers(ll a,ll n,vector<ll> &v){
    if(a>n)
        return  ;
    if(a>0)
        v.push_back(a) ;
    numbers(a*10+4,n,v) ;
    numbers(a*10+7,n,v) ;
}
 
int main(){
 
    ll n ;
    cin >> n ;
    ll a=4,b=7,count=0 ;
    vector<ll> v ;
    numbers(0,n,v) ;
    sort(v.begin(),v.end()) ;
    
    for(ll i=0 ; i<v.size() ; i++){
        for(ll j=i+1 ; j<v.size() ; j++){
            if(__gcd(v[i],v[j])==1)
                count++ ;
        }
    }
    cout << count ;
}