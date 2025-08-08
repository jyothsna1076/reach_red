#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long a, b;
        cin>>a>>b;
        long long ans= -1;
        bool stop= false;
        if(a<b)
        {
            a= a^b;
            b= b^a;
            a= a^b;
        }
        
            long long m= a/b;
            if(a==b) ans=0;
            else if(!(m&1) && a%b==0) 
            {   ans=0;
                // while(m>1)
                // {
                //     if(m>=8)
                //     {
                //         ans++;
                //         m= m/8;
                //     }
                //     else if(m>=4)
                //     {
                //         ans++;
                //         m= m/4;
                //     }
                //     else if(m>=2)
                //     {
                //         ans++;
                //         m= m/2;
                //     }
                // }
                if((m & (m-1))!=0) ans=-1;
                else{
                    m= log2(m);
                    ans+= m/3;
                    m= m- 3*(m/3);
                    ans+= m/2;
                    m= m- 2*(m/2);
                    ans+= m/1;

                }
            }
           
        cout<<ans<<endl;
    }
    return 0;
}