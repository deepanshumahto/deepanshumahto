#include<iostream>
using namespace std ;
 
int main(){
    int n ;
    cin >> n ;
    while(n--){
        int lines ;
        cin >> lines ;
        for(int i=1 ; i<=lines ; i++){
            for(int j=1 ; j<=2*lines ; j++){
                if(j<=i||j>2*lines-i)
                    cout << '*' ;
                else
                    cout << '#' ;
            }
            cout << endl ;
        }
        cout << endl ;    
    }
    return 0 ;
}