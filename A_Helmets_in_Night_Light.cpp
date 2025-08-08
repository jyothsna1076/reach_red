#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n, p;
        cin>>n>>p;
        if(n!=0)
        {
        vector<int> maxpeople(n);
        vector<int> cost(n);
        for(auto &a: maxpeople) cin>>a;
        for(auto &a: cost) cin>>a;
        vector<pair<int,int>> table;
        for(int i=0;i<n;i++)
        {
           table.push_back({cost[i], maxpeople[i]});
        }
        sort(table.begin(), table.end());
        int peoplereached=1;
        long long  mincost=p;
       // int m= table.size();
        int i=1;
        for(auto a: table)
        {
            if(i<= peoplereached && peoplereached!= n)
            {   if(a.second <= n-peoplereached)
                {
                peoplereached+= a.second;
                mincost+= a.first<p ? 1LL*a.first *a.second: 1LL*p*a.second;
                i++;
                }
                else 
                {
                  
                    mincost+= a.first<p ? 1LL*a.first *(n-peoplereached): 1LL*p*(n-peoplereached);
                      peoplereached+= n-peoplereached;
                }
                //cout<<mincost<<" ";
            }
            else break;
           
        }
        if(peoplereached<n) 
        {
            mincost+= 1LL*p*(n-peoplereached);
        }
        cout<<mincost<<"\n";
    }
    }
    return 0;
}