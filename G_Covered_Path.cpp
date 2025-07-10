#include<bits/stdc++.h>
using namespace std;
const int mod =1e9+7;
pair<int, vector<int>> helper(int v1,int v2, int t, int d,int dis,bool flag,vector<int>&path)
{   if(t==1)
    {
        if(v1!= v2) return {0,{}};
        else return {dis+v2,path};
    }
    int ans=0;
    vector<int> finalans;
    for(int i=0;i<=d;i++)
    { //if(flag) cout<<i<<endl;
        path.push_back(i);
         auto d1= helper(v1+i,v2,t-1,d,dis+v1,false,path);
        if(d1.first >ans)
        {
            ans= d1.first;
            finalans= d1.second;
        }
        
        path.pop_back();
        path.push_back(-i);
       
      auto d2= helper(v1-i,v2,t-1,d,dis+v1,false,path);
          if(d2.first >ans)
        {
            ans= d2.first;
            finalans= d2.second;
        }
        path.pop_back();
    }
    return {ans,finalans};
}
int main()
{
//     #include <typeinfo>
// cout << typeid(pow(2, 5)).name() << endl;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int v1,v2;
    int t,d;
    cin>>v1>>v2>>t>>d;
    vector<int> ans;

   auto check=helper(v1,v2,t,d,0,true,ans);
   cout<<check.first<<"\n";
//    ans= check.second;
//    for(int i=0;i<ans.size();i++)
//    {
//     cout<<ans[i]<<" ";
//    }


    
    return 0;
}