#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a, b, n;
        cin>>a>>b>>n;
        vector<int> arr(n);
        long long ans=0;
        for(auto &i :arr) 
        {
            cin>>i;
            if(i >= a ) ans+= a-1;
            else ans+=i;
        }
       cout<<ans+b<<endl;
    }
    return 0;
}