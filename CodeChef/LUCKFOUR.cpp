#include <iostream>
using namespace std;

int count4(int a){
    
    int count=0 ;
    while(a){
        int digit=a ;
        if(digit==4)
            count++ ;
        a=a/10 ;
    }
    return count ;
}

int main() {

    int n ;
    cin >> n ;
    long arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    
    for(int i=0 ; i<n ; i++){
        cout << count4(arr[i]) << endl ;
    }
    return 0;
}

