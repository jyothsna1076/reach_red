#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=0;int r=0;
        int whitecount=0;
        int minwcount=INT_MAX;
        while(l<=r && r<n)
        {   if(s[r]=='W')whitecount++;
            while(r-l+1 ==k)
            {
                minwcount= min(minwcount, whitecount);
                    if(s[l]=='W') whitecount--;
                    l++;
             }
             r++;
        }
        cout<<minwcount<<endl;
    }
    return 0;
}