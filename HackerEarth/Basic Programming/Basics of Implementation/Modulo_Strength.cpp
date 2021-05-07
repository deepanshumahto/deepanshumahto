#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n,k,j,s=0;
    cin>>n>>k;
    ll a[n],b[k]={0};
    for(ll x=0;x<n;x++){
        cin>>a[x];
        b[a[x]%k]+=1;
    }
    for(ll j=0;j<k;j++){
        s+=b[j]*(b[j]-1);
    }
    cout<<s;
}