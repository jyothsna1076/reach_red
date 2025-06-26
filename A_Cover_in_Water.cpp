#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        string s;
        cin>>n>>s;
        int temp=0;
        int sum= 0;
        int maxi=0;
        int i=0;
        for( i=0;i<n;i++)
        {
            if(s[i]== '.')
            {
                temp++;
                sum++;
                maxi= max(maxi,temp);
                if(maxi>=3) break;
            }
            else{
                temp=0;
            }
        }
        if(i<n) cout<<"2"<<endl;
        else cout<<sum<<endl;

    }
    return 0;
}