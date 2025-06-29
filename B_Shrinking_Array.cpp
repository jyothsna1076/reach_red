#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int t=1;
    while(t++ <= tc)
    {
      int n;
      cin>>n;
      vector<int> arr(n);
      unordered_map<int,int> table;
      int ans=-1;
      int mini= INT_MAX;
      for (int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      for(int i=1;i<n-1;i++)
      {
        if(abs(arr[i]-arr[i-1])<=1 || abs(arr[i]-arr[i+1])<=1) mini=0;
        if((arr[i-1]>arr[i] && arr[i]<arr[i+1]) || (arr[i-1]<arr[i] && arr[i]>arr[i+1])) mini= min(mini,1);
      }
      if(abs(arr[0]-arr[1])<=1 ) mini= 0;
      if(abs(arr[n-1]-arr[n-2])<=1) mini=0;
      if(mini!= INT_MAX) cout<<mini<<endl;
      else cout<<"-1"<<endl;
    }
    
    return 0;
}