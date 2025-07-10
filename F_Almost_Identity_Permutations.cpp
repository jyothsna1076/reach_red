#include<bits/stdc++.h>
using namespace std;
const int mod =1e9+7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    if(k>n) k=n;
    vector<long long> dp(k+1);
    dp[0]=1;
  for(int i=1;i<=k;i++)
  {
    dp[i]=(dp[i-1]*(n-i+1))/(1LL*i);
   // cout<<dp[i]<<" ";
  }
vector<long long> derangements(k+1);
derangements[0]=1;
derangements[1]=0;
for(int i=2;i<=k;i++)
{
    derangements[i]= ((derangements[i-1]+derangements[i-2])*(i-1));
    //cout<<derangements[i]<<" ";
}
long long ans=0;
for(int i=0;i<=k;i++)
{
    ans+= (derangements[i]*dp[i]);
  //  cout<<ans<<" "; 
}
cout<<ans<<"\n";
    return 0;
}