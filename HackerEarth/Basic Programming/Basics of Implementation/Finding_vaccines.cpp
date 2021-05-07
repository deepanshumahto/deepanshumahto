#include<bits/stdc++.h>
using namespace std ;
 
int main(){
 
    int t ;
    cin >> t ;
    int tc=1,pvsize,c=0,g=0;
    string pv ;
    cin >> pvsize ;
    for(int i=0 ; i<pvsize ; i++){
        char ch ;
        cin >> ch ;
        pv.push_back(ch) ;
        if(ch=='C')
            c++ ;
        else if(ch=='G')
            g++ ;
    }
    int bestinteraction=0,bestvaccine,bestsize ;
    while(tc<=t){
        int vvsize,interaction=0 ;
        cin >> vvsize ;
        if(tc==1){
            bestvaccine=1 ;
            bestsize=vvsize ;
        }
        char ch ;
        for(int i=0 ; i<vvsize ; i++){
            cin >> ch ;
            if(ch=='G'){
                interaction+=c ;
            }
            else if(ch=='C')
                interaction+=g ;
            if(interaction>bestinteraction){
                bestinteraction=interaction ;
                bestvaccine=tc ;
                bestsize=vvsize ;
            }
            else if(interaction==bestinteraction&&vvsize<bestsize){
                bestvaccine=tc ;
                bestsize=vvsize ;
            }
        }
        tc++ ;
    }
    cout << bestvaccine ;
 
    return 0 ;
}