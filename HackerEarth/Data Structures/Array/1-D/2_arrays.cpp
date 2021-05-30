#include<bits/stdc++.h>
using namespace std ;
#define fastIO() ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) 
#define int long long
#define endl '\n'
#define testcase int t ; cin >> t ; while(t--)
#define all(v) v.begin(),v.end()
#define mod 1000000007

void fileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve(){
    int n ;
    cin >> n ;
    int count1=0,sum1=0,count2=0,sum2=0 ;
    int arr1[n],arr2[n] ;
    
    for(int i=0 ; i<n ; i++){
        cin >> arr1[i] ;
        if(arr1[i]==-1)
            count1++ ;
        else
            sum1+=arr1[i] ;
    }
    for(int i=0 ; i<n ; i++){
        cin >> arr2[i] ;
        if(arr2[i]==-1)
            count2++ ;
        else
            sum2+=arr2[i] ;
    }

    if(count1==0 and count2==1){
        if(sum1>=sum2)
            cout << 1 ;
        
        else
            cout << 0 ;
    }

    else if(count1==1 and count2==0){
        if(sum1<=sum2)
            cout << 1 ;

        else
            cout << 0 ;

    }

    else if(count1==0 and count2==2){
        
        if(sum1>=sum2)
           cout << (abs(sum1-sum2)+1) ;
        
        else
            cout << 0 ;
    }

    else if(count1==2 and count2==0){
        if(sum1<=sum2)
            cout<< (abs(sum2-sum1)+1) ;
        else
            cout << 0 ;
    }
    
    else 
        cout << "Infinite" ;
    
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}
