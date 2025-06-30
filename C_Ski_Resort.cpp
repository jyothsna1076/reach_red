#include<bits/stdc++.h>
//#include<numeric>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
       int n,k,q;
       cin>>n>>k>>q;
       vector<int> arr(n);
        for(auto &a:arr) cin>>a;
        int sum=0;
        long long  ans=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=q)
            {
                sum++;
            }
            else{
                if(sum>=k)
                {  
                   ans+= (1LL*(sum-k+1)*(sum-k+2))/2;
                }
                sum=0;
            }
        }
         if(sum>=k)
                {  
                    ans+= (1LL*(sum-k+1)*(sum-k+2))/2;
                }
        cout<<ans<<endl;

    }
    
    return 0;
}