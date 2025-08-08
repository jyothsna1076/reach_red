#include<bits/stdc++.h>
using namespace std;
const int mod =1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,o;
    cin>>n>>k>>o;
    vector<int> person(n);
    vector<int> keys(k);
    for(auto &a: person) cin>>a;
    for(auto &b: keys) cin>>b;
    vector<vector<long long >> dp(n+1, vector<long long>(k+1,INT_MAX));
    sort(person.begin(), person.end());
    sort(keys.begin(), keys.end());
  // dp[0][0]= 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(j<i) continue;
           long long temp= 0;
           if(i==1 || j==1)
           temp= abs(person[i-1]-keys[j-1])+1LL*abs(keys[j-1]-o);
           else 
           temp=max(dp[i-1][j-1], abs(person[i-1]-keys[j-1])+1LL*abs(keys[j-1]-o));
            dp[i][j]= min(dp[i][j-1], temp);
          // cout<<dp[i][j]<<" ";
        }
    }
    cout<<dp[n][k]<<"\n";
    return 0;
}