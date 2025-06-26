#include<bits/stdc++.h>
using namespace std;
//TC---o(n), SC-o(26)
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> store;
        int ans= 0;
        for(int i=0;i<n;i++)
        {
           if(store[s[i]]==0) 
           {
            store[s[i]]++;;
            ans++;
           }
           else{
            store[s[i]]--;
            ans--;
           }

        }
        if(k>= ans || ans==k+1 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}