#include<iostream>
using namespace std ; 

int main(){
    int l,t ;
    cin >> l >> t ;
    while(t--){
        int w,h ;
        cin >> w >> h ;
        if(w<l||h<l)
            cout << "UPLOAD ANOTHER" << endl ;
        else{
            if(w==h)
                cout << "ACCEPTED" << endl ;
            else    
                cout << "CROP IT" << endl ;
        }
    }
    return 0 ;
}