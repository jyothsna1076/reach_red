#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
       int n;
       cin>>n;
       vector<int> arr(n+1);
       for(int i=1;i<n+1;i++) cin>>arr[i];
       vector<pair<int, int>> table;
       for(int i=1;i<n+1;i++) table.push_back({arr[i],i});
       sort(table.begin(), table.end(), greater<pair<int,int>>());
       vector<int> ans(n+1);
       
       int m= (n+1)/2;
       ans[0]=m;
       int l= m-1;
       int r= m+1;
       long long mintime=0;
       for(auto a:table)
       {
            if((m-l)<=(r-m) && l>=0)
            {
                ans[a.second]=l;
                mintime+= 1LL*a.first* (m-l);
                l--;
            }
            else{
                ans[a.second]=r;
                 mintime+= 1LL*a.first* (r-m);
                r++;
            }
       }
       cout<<1LL*2*mintime<<endl;
       for(auto a: ans) cout<<a<<" ";
       cout<<endl;
        
    }
    return 0;
}