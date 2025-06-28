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
        int zcount=0;
        int ocount=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') zcount++;
            else ocount++;
        }
        int sub= (n-2*k)/2;
        if((zcount-sub)>=0 && ((zcount-sub)%2==0) && (ocount-sub)>=0 && ((ocount-sub)%2==0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}