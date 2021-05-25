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

void displayArray(int** array , int size){
    
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size ; j++)
            cout << array[i][j] << ' ' ;
        cout << endl ;
    }
}

bool checkMove(int** questionArray , int x , int y , int n){
    
    for(int row=0 ; row<x ; row++){
        if(questionArray[row][y]==1)
            return false ; 
    }
    
    int row=x,col=y ;
    
    
    while(row>0&&col>0){
        if(questionArray[row-1][col-1]==1)
            return false ;
        row-- ;
        col-- ;
    }

    row=x ;
    col=y ;
    
    while(row>0&&col<=n){
        if(questionArray[row-1][col+1]==1)
            return false ;
        row-- ;
        col++ ;
    }

    return true ;
}

bool solveNqueen(int ** questionArray , int x , int n){
    if(x==n)
        return true ;
    for(int col=0 ; col<n ; col++){
        if(checkMove(questionArray,x,col,n)){
            questionArray[x][col]=1 ;
        
            if(solveNqueen(questionArray,x+1,n))
                return true ;
        
            questionArray[x][col]=0 ;
        }
    }
    return false ;

}

void solve(){
    int n ;
    cin >> n ;
    int** questionArray= new int*[n] ;
    
    for(int i=0 ; i<n ; i++){
        questionArray[i]=new int[n] ;
    }
    
    for(int i=0 ; i<n ; i++){  
        for(int j=0 ; j<n ; j++){
            questionArray[i][j]=0 ;
        }
    }
    
    //cout << solveNqueen(questionArray,0,n) << '\n' ;
    
    if(solveNqueen(questionArray,0,n))
        displayArray(questionArray,n) ; 
    else
        cout << "Not possible" ;   
    
    for(int i=0 ; i<n ; i++)
        delete questionArray[i] ;
    delete questionArray ;
    
}


int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}