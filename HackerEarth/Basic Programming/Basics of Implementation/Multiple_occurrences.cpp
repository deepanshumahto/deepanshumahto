#include<bits/stdc++.h>
using namespace std ;
#define ll long long
 
int main(){
 
    int t ; 
    cin >> t ;
    while(t--){
        ll size ;
        cin >> size ;
        vector<pair<ll,ll>> v ;
        for(ll i=0 ; i<size ; i++){
            ll n ;
            cin >> n ;
            pair<ll,ll> p ;
            p.first=n ;
            p.second=i ;
            v.push_back(p) ;
        }
        sort(v.begin(),v.end()) ;
        ll sum=0,l=-1,r=-1 ;
        for(int i=0 ; i<size ; i++){
            if(i==0||(v[i].first!=v[i-1].first))
                l=v[i].second ;
            if(i==size-1||(v[i].first!=v[i+1].first)){
                r=v[i].second ;
                //cout << l << ',' << r << ' ' ;
                sum+=(r-l) ;
                l=-1 ;
                r=-1 ;
            }
        }
        cout << endl << sum << endl ;
    }
}