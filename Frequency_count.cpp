
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,n=s.length(),c=0;
    unordered_map<int,char> mp;
    for(i=0;i<n;i++)
    {
        mp[s[i]]++;
        
    }
    for(auto it:mp)
    {
        if(it.second==1)
        c++;
        
    }
    cout<<c<<endl;
    

    return 0;
}
