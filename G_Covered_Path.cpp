#include<bits/stdc++.h>
using namespace std;
const int mod =1e9+7;
bool helper(int v1,int v2, int present,int t, int d,vector<vector<int>> &dp)
{   if(present==t)
    {
        if(v1==v2) return true;
        else return false;
    }
int end= max(v1-d,0);
//cout<<"end is"<<end<<" ";
for(int i= v1+d; i>=end;i--)
{   
    if(dp[present+1][i]==0) 
    { dp[present+1][i]= dp[present][v1]+i;
       // cout<<dp[present+1][i]<<" ";
      if(helper(i,v2,present+1,t,d,dp)) return true;
    }
    
}
return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int v1,v2;
    int t,d;
    cin>>v1>>v2>>t>>d;
    //vector<int> ans;
vector<vector<int>> dp (t+1,vector<int>(1200,0));
dp[1][v1]=v1;

 bool ans= helper(v1,v2,1,t,d,dp);
  cout<<dp[t][v2]<<"\n";
    return 0;
}