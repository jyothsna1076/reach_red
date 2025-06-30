#include<bits/stdc++.h>
//#include<numeric>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        long long mini=INT_MAX;
        int m= n/2;
        if(n%2 ==0) cout<<n/2<<" "<<n/2<<endl;
        else
        {   int i=2;
            int ans= 0;
        
          int num =ceil( sqrt(n));
          //cout<<num<<" ";
           while(i<=num)
           {
            if(n%i ==0)
            {
                ans= n/i;
                break;
            }
            i++;
           }
           if(ans!=0 && ans!= n)
        cout<<ans<<" "<<n-ans<<endl;
        else cout<<"1 "<<n-1<<endl;
    }
    }
    return 0;
}