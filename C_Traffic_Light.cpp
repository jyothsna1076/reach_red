#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int j=0;
    while(j<tc)
    {
       int n;
       char c;
       cin>>n;
       cin>>c;
       string s;
       cin>>s;
       if(c=='g') cout<<"0"<<endl;
       else
       {
       int gindex=-1;
       for(int i=0;i<n;i++)
       {
        if(s[i]== 'g') 
        {
            gindex= i;
            break;
        }
       }
       if(gindex==-1) cout<<gindex<<endl;
       else{
        int maxi=0;
         int temp=0;
        //int anothergfound=false;
        for(int i=n-1;i>=0;i--)
        {  
            if(s[i]==c)
            {   if(gindex-i <0) temp= gindex-i +n;
                else temp= gindex-i;
                maxi= max(maxi,temp);
            }
            else if(s[i]=='g') gindex=i;
        }
        cout<<maxi<<endl;
       }
    }
       j++;
    }
    return 0;
}