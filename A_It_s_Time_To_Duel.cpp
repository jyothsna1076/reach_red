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
        vector<int> win(n);
        int sum=0;
        for(auto &a: win)
        {
            cin>>a;
            sum+=a;
        }
        bool foundconseczeroes= false;
        for(int i=0;i<n-1;i++) 
        { 
          if(win[i]==0 && win[i+1]==0)
          {
            foundconseczeroes= true;
            break;
          }
        }
        if(sum==n || foundconseczeroes) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}