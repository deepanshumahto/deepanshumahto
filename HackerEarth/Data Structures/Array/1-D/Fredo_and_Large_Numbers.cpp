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
	vector<int> distinct ;
	map<int,int> count ;
	int arr[n];
	for(int i=0 ; i<n ; i++)	{
		cin >> arr[i] ;
		if(count.find(arr[i]) == count.end())
			distinct.push_back(arr[i]) ;
		count[arr[i]]++ ;
	}
	
    int maxx=0 ;
	
    for(auto i: count)
		maxx=max(maxx,i.second) ;
	
    testcase{
		int type,freq ;
		cin >> type >> freq ;
		
        if(freq>maxx){
			cout << 0 << endl ;
			continue ;
		}
		
        int flag=0 ;
		
        for(int i=0 ; i<distinct.size() ; i++)	{
			
            if(type==0 && count[distinct[i]]>=freq)	{
				flag=1 ;
				cout << distinct[i] << endl ;
				break ;
			}
			else if(type==1 && count[distinct[i]]==freq)	{
				flag=1 ;
				cout << distinct[i] << endl ;
				break ;
			}
		}
		
        if(flag==0)
			cout << 0 << endl ;
	}
}

int32_t main(){

    fastIO() ;
    
    solve() ;

    return 0 ;
}