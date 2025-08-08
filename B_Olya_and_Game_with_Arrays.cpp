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
        long long ans=0;
        vector<int> smallarr;
        vector<int> secondsmallarr;
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            int smallest =INT_MAX;
            int secondsmallest =INT_MAX;
            for(int j=0;j<m;j++)
            {
                int a;
                cin>>a;
                if(a < smallest )
                {   secondsmallest = smallest ;
                    smallest = a; 
                }
                else if(a<secondsmallest) secondsmallest= a;

            }
            smallarr.push_back(smallest );
            secondsmallarr.push_back(secondsmallest);
        }
        sort(secondsmallarr.begin(), secondsmallarr.end());
        for(int i=1;i<n;i++) ans+= secondsmallarr[i];
        sort(smallarr.begin(), smallarr.end());
        ans+= smallarr[0];
      cout<<ans<<endl;
    }
    return 0;
}