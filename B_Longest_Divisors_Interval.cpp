#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n;
        cin>>n;
        long long l=1;
        long long r= sqrt(n);
        long long ans= 0;
        long long maxi=0;
        //unordered_map<long long, int> store;
        while(l<=50)
        {// cout<<l<<" ";
            if(n%l ==0) 
            {  
                 //store[l]=1;
                
                ans++;
                maxi= max(maxi,ans);
               
            }
            else
            { 
             
                ans=0;
            }
            
            l++;
        }
        cout<<maxi<<endl;
    }
    return 0;
}