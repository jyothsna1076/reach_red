#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        int x;
        int change= 0;
        cin>>n>>x;
        x= 2*x+1;
        vector<int> arr(n);
        for(auto &a:arr) cin>>a;
        int mini=INT_MAX;
        int maxi= INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini= min(mini,arr[i]);
            maxi= max(maxi,arr[i]);
          //  cout<<mini<< " "<<maxi<<" ;";
            if(maxi-mini+1 > x )
            {
                mini= arr[i];
                maxi=arr[i];
                change++;
            }

        }
        cout<<change<<endl;
    }
    return 0;
}