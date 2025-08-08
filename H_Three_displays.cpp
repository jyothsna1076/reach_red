#include<bits/stdc++.h>
using namespace std;
const int mod =1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> s(n);
    for(auto &a:s ) cin>>a;
    vector<int> c(n);
    for(auto &a: c) cin>>a;
    vector<long long> dp(n,INT_MAX);
    long long temp=0;
    priority_queue<pair<int,int>> q;
    q.push({c[0],s[0]});
    temp+= c[0];
    for(int i=1;i<n;i++)
    {
        if(s[i]> s[i-1])
        {
            if(q.size()<3) 
            {q.push(c[i]);
                temp+= c[i];
             //cout<<temp<<" "; 
            }
            else{
                if(c[i]<q.top())
                {   temp-= q.top();
                    q.pop();
                    q.push(c[i]);
                    temp+= c[i];
                   // cout<<temp<<" ";
                }

            }
       
            
        }
        if(i>3) dp[i]= min(dp[i-1],temp);
    }
    if(dp[n-1]!= INT_MAX) cout<<dp[n-1]<<"\n";
    else cout<<"-1"<<"\n";
    return 0;
}