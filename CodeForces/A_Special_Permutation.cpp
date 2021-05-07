#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    srand(time(0)) ;
    while(t--){
        int n ;
        cin >> n ;
        int arr[n] ;
        for(int i=0 ; i<n ; i++){
            if(i==n-1){
                arr[i]=1 ;
            cout << arr[i] << ' ' ;
                break ;
            }
            arr[i]=i+2 ;
            cout << arr[i] << ' ' ;
        }
    cout << endl ;

    }
}