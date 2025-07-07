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
    vector<int>b(n);
    for(auto &a:b) cin>>a;
    int a1=-1;
    int a1index=-1;
    int b1=-1;
    int a2index=-1;
    int a2=-1,b2=-1;
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(b[i+1]%b[i]!=0)
        {
            if(count==0)
            {
                a1=b[i];
                a1index=i;
                b1=b[i+1];
                 count++;
                // continue;
            }
            else if(count==1)
            {
                a2=b[i];
                a2index=i;
                b2=b[i+1];
                count++;
            }
            else{
                break;
            }
            
        }
    }
    int gcd1= a1/(gcd(a1,b1));
    int gcd2= a2/(gcd(a2,b2));
    int ans= lcm(gcd1,gcd2);
     if(count==0)cout<<"1"<<endl;
     else if(count==1)
     {
        cout<<gcd1<<endl;
     }
     else{
        for(int k=a2index+1;k<n-1;k++)
        {
            if(b[k+1]%b[k]!=0)
            {
                if(b[k+1]%(b[k]/ans)==0)continue;
                else{
                    for(int m=2;;m++)
                    {
                        if(b[k+1]%(b[k]/(m*ans))==0) 
                        {
                            ans= m*ans;
                            break;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
     }
    }
    return 0;
}