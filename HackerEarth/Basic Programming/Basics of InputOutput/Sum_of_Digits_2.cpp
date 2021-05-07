#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            ans+=int(s[i]-'0');
        }
        int x=0;
        while(ans>9)
        {
            
            x=sum(ans);
            ans=sum(ans);
        }
        cout<<x<<"\n";
 
 
    }
}