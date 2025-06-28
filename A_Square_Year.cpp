#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int ans=0;
        int mul=1;
        for(int i=3;i>=0;i--)
        {
            ans+= (s[i]-'0')*mul;
            mul*=10;
        }
        float sq= sqrt(ans);
        if(ceil(sq)!= sq) cout<<-1<<endl;
        else cout<<"0 "<<sq<<endl;
    }
    return 0;
}