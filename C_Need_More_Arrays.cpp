#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int m= 1;
    while(m<=tc)
    {
      int n;
      cin>>n;
      vector<int> arr(n);
      for(auto &a: arr) cin>>a;
    //   if(m==158)
    //   {
    //     for( auto a:arr) cout<<a<<" ";
    //     cout<<endl;
    //   }
      int ans=1;
     // bool entered= false;
     int prev=0;
      for(int i=1;i<n;i++)
      {
        if(arr[i]> arr[prev]+1) 
        {
          ans++;
          prev= i;
        }
      }
      cout<<ans<<endl;
      m++;
    }
    return 0;
}