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
        int n= s.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') count++;
            else count--;
        }
        // int a= -1;
        
        // if(count>0 ) a=0;
        // else if(count<0) a=1;
        // cout<<count<<" "<<a<<" ";
       // count = abs(count);
        int last= 0;
         int r=0;
        if(count!=0)
        {
        for(int i=n-1;i>=n-abs(count);i--)
        {
            if(count >0 && s[i]!='0') last++;
            else if(count<0 && s[i]!='1' ) last++;
        }
       
        if(last>0)
        {
        for(int i= n-abs(count)-1;i>=0;i--)
        {
            if(count>0 && s[i]=='0' && last>0)
            {
                last--;r=i;
            }
            if(count<0 && s[i]=='1' && last>0)
            {
                last--;r=i;
            }
            if(last==0)break;
        }
    }
    }
    //cout<<count<<" "<<last<<" ";
    if(r>0)
    cout<<n-r<<endl;
    else cout<<abs(count)<<endl;
    }
    return 0;
}
