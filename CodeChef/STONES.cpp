#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    string j,s;
	    cin>>j>>s;
	    int count=0;
	    for(int i=0;i<s.size();i++){
	        if(j.find(s[i])!=-1){
	            ++count;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}