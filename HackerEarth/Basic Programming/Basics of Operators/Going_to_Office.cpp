#include<bits/stdc++.h>
using namespace std ;
#define faster ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ;
#define ll long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)
 
int main(){
 
    faster
    ll distance,oc,of,od,cs,cb,cm,cd ;
    cin >> distance >> oc >> of >> od >> cs >> cb >> cm >> cd ;
    ll o=0,c=0 ;
    o=oc+(distance-of)*od ;
    c=cb+(distance/cs)*cm+distance*cd ;
    if(o<=c)
        cout << "Online Taxi" ;
    else
        cout << "Classic Taxi" ;
 
    return 0 ;
}